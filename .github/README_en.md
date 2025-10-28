### [简体中文](README.md) | English | [繁體中文](README_cht.md) | [한국어](README_ko.md) | [日本語](README_ja.md) | [Tiếng Việt](README_vi.md) | [Русский язык](README_ru.md)

# LunaTranslator [Download & Launch & Update](https://docs.lunatranslator.org/en/README.html)  

> **A Visual Novel translation tool**

### If you encounter any difficulties while using the software, you can check the [User Guide](https://docs.lunatranslator.org/en), or join our [Discord](https://discord.com/invite/ErtDwVeAbB).

## Feature Support

#### Text Input

- **HOOK** Supports obtaining text using HOOK methods. For some engines, it also supports [embedded translation](https://docs.lunatranslator.org/en/embedtranslate.html). And Extracting text from games running on some [Emulators](https://docs.lunatranslator.org/en/emugames.html) is also supported. For games that are not supported or not well supported, please [submit feedback](https://github.com/HIllya51/LunaTranslator/issues/new?assignees=&labels=enhancement&projects=&template=01_game_request.yaml) 

- **OCR** supports **[offline OCR](https://docs.lunatranslator.org/en/useapis/ocrapi.html)** and **[online OCR](https://docs.lunatranslator.org/en/useapis/ocrapi.html)**

- **Clipboard** Supports retrieving text from the clipboard for translation and can also output extracted text to the clipboard.

- **Other** also supports **[speech recognition](https://docs.lunatranslator.org/en/sr.html)** and **file translation**

#### Translator

Supports almost all conceivable translation engines, including:

- **Online Translation** Supports many online translation interfaces that can be used without registration, and also supports **[traditional translation](https://docs.lunatranslator.org/en/useapis/tsapi.html)** and **[large model translation](https://docs.lunatranslator.org/en/guochandamoxing.html)** using user-registered APIs

- **Offline translation** Supports common **traditional translation** engines and **[large model translation](https://docs.lunatranslator.org/en/offlinellm.html)** for offline deployment

- **Pre-translation** Supports reading pre-translated files, supports translation caching

- **Support for Custom Translation Extensions** Supports extending other translation interfaces using the Python language

#### Other Functions

- **[Text-to-Speech](https://docs.lunatranslator.org/en/ttsengines.html)** supports **Offline TTS** and **Online TTS**

- **[Japanese Word Segmentation and Kana Pronunciation](https://docs.lunatranslator.org/en/qa1.html)** Supports word segmentation and kana display using Mecab, etc.

- **[Vocabulary Lookup](https://docs.lunatranslator.org/en/internaldict.html)** Supports **offline dictionaries** (MDICT) and **online dictionaries** for word lookup

- **[Anki](https://docs.lunatranslator.org/en/qa2.html)** Supports one-click addition of words to Anki

- **[Load Browser Extensions](https://docs.lunatranslator.org/en/yomitan.html)** Browser extensions like Yomitan can be loaded within the software to assist in implementing additional features.

## Sponsorship

Software maintenance is not easy. If you find this software helpful, feel free to support me via [Patreon](https://patreon.com/HIllya51). Your support will contribute to the long-term maintenance of the software. Thank you~

<a href="https://patreon.com/HIllya51" target='_blank'><img width="200" src="../docs/become_a_patron_4x1_black_logo_white_text_on_coral.svg"></a>

## Open Source License

LunaTranslator uses [GPLv3](../LICENSE) license.

<details>
<summary>Referenced Projects</summary>

* ![img](https://img.shields.io/github/license/opencv/opencv) [opencv/opencv](https://github.com/opencv/opencv)
* ![img](https://img.shields.io/github/license/microsoft/onnxruntime) [microsoft/onnxruntime](https://github.com/microsoft/onnxruntime)
* ![img](https://img.shields.io/github/license/Artikash/Textractor) [Artikash/Textractor](https://github.com/Artikash/Textractor)
* ![img](https://img.shields.io/github/license/RapidAI/RapidOcrOnnx) [RapidAI/RapidOcrOnnx](https://github.com/RapidAI/RapidOcrOnnx)
* ![img](https://img.shields.io/github/license/PaddlePaddle/PaddleOCR) [PaddlePaddle/PaddleOCR](https://github.com/PaddlePaddle/PaddleOCR)
* ![img](https://img.shields.io/github/license/Blinue/Magpie) [Blinue/Magpie](https://github.com/Blinue/Magpie)
* ![img](https://img.shields.io/github/license/nanokina/ebyroid) [nanokina/ebyroid](https://github.com/nanokina/ebyroid)
* ![img](https://img.shields.io/github/license/xupefei/Locale-Emulator) [xupefei/Locale-Emulator](https://github.com/xupefei/Locale-Emulator)
* ![img](https://img.shields.io/github/license/InWILL/Locale_Remulator) [InWILL/Locale_Remulator](https://github.com/InWILL/Locale_Remulator)
* ![img](https://img.shields.io/github/license/zxyacb/ntlea) [zxyacb/ntlea](https://github.com/zxyacb/ntlea)
* ![img](https://img.shields.io/github/license/Chuyu-Team/YY-Thunks) [Chuyu-Team/YY-Thunks](https://github.com/Chuyu-Team/YY-Thunks)
* ![img](https://img.shields.io/github/license/Chuyu-Team/VC-LTL5) [Chuyu-Team/VC-LTL5](https://github.com/Chuyu-Team/VC-LTL5)
* ![img](https://img.shields.io/github/license/uyjulian/AtlasTranslate) [uyjulian/AtlasTranslate](https://github.com/uyjulian/AtlasTranslate)
* ![img](https://img.shields.io/github/license/ilius/pyglossary) [ilius/pyglossary](https://github.com/ilius/pyglossary)
* ![img](https://img.shields.io/github/license/ikegami-yukino/mecab) [ikegami-yukino/mecab](https://github.com/ikegami-yukino/mecab)
* ![img](https://img.shields.io/github/license/AngusJohnson/Clipper2) [AngusJohnson/Clipper2](https://github.com/AngusJohnson/Clipper2)
* ![img](https://img.shields.io/github/license/rapidfuzz/rapidfuzz-cpp) [rapidfuzz/rapidfuzz-cpp](https://github.com/rapidfuzz/rapidfuzz-cpp)
* ![img](https://img.shields.io/github/license/TsudaKageyu/minhook) [TsudaKageyu/minhook](https://github.com/TsudaKageyu/minhook)
* ![img](https://img.shields.io/github/license/lobehub/lobe-icons) [lobehub/lobe-icons](https://github.com/lobehub/lobe-icons)
* ![img](https://img.shields.io/github/license/kokke/tiny-AES-c) [kokke/tiny-AES-c](https://github.com/kokke/tiny-AES-c)
* ![img](https://img.shields.io/github/license/AuroraWright/owocr) [AuroraWright/owocr](https://github.com/AuroraWright/owocr)
* ![img](https://img.shields.io/github/license/b1tg/win11-oneocr) [b1tg/win11-oneocr](https://github.com/b1tg/win11-oneocr)
* ![img](https://img.shields.io/github/license/mity/md4c) [mity/md4c](https://github.com/mity/md4c)
* ![img](https://img.shields.io/github/license/swigger/wechat-ocr) [swigger/wechat-ocr](https://github.com/swigger/wechat-ocr)
* ![img](https://img.shields.io/github/license/rupeshk/MarkdownHighlighter) [rupeshk/MarkdownHighlighter](https://github.com/rupeshk/MarkdownHighlighter)
* ![img](https://img.shields.io/github/license/sindresorhus/github-markdown-css) [sindresorhus/github-markdown-css](https://github.com/sindresorhus/github-markdown-css)
* ![img](https://img.shields.io/github/license/gexgd0419/NaturalVoiceSAPIAdapter) [gexgd0419/NaturalVoiceSAPIAdapter](https://github.com/gexgd0419/NaturalVoiceSAPIAdapter)
* ![img](https://img.shields.io/github/license/microsoft/PowerToys) [microsoft/PowerToys](https://github.com/microsoft/PowerToys)
</details>
