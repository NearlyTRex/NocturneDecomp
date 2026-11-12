; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_dosio_cpp_FUN_00465660(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[7]:
;   engine_dosio.cpp_FUN_004659c0 at 004659e7
;   engine_dosio.cpp_getFileSize_FUN_004657f0 at 0046580b
;   engine_dosio.cpp_reopenFileStream_FUN_00465a80 at 00465ac0
;   engine_pod.cpp_CPod_locateFile_FUN_00514c20 at 00514c48
;   engine_pod.cpp_FUN_00512fb0 at 00513005
;   engine_texture.cpp_CTextureCache_loadTexture_FUN_00569790 at 00569819
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0 at 00573ff3
;
; Referenced Globals:
;   void* PTR_engine_dosio.cpp_getRelativeFilePath_FUN_00465600_005f2ad0 = 00465600
;
; Called Functions:
;   engine_dosio.cpp_getRelativeFilePath_FUN_00465600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465660
        ;   Label: engine_dosio.cpp_FUN_00465660
    MOV EDX,dword ptr [ESP + 0x10]      ; 00465661
    PUSH EDX                            ; 00465665
    MOV ECX,dword ptr [ESP + 0x10]      ; 00465666
    PUSH ECX                            ; 0046566a
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046566b
    PUSH EBX                            ; 0046566f
    CALL dword ptr [0x005f2ad0]         ; 00465670 | PTR_engine_dosio.cpp_getRelativeFilePath_FUN_00465600_005f2ad0
    ADD ESP,0xc                         ; 00465676
    POP EBX                             ; 00465679
    RET                                 ; 0046567a

