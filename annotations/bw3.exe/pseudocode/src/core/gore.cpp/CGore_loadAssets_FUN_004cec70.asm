; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_loadAssets_FUN_004cec70(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_loadAssets_FUN_004bd430 at 004bd456
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fed34
;   undefined4 DAT_005fed4c
;   undefined4 DAT_005fed64
;   undefined4 DAT_005fedac
;   undefined4 DAT_005fedc4
;   undefined4 DAT_005fef2c
;   undefined4 DAT_005ff3ac
;   undefined4 DAT_005ff3c4
;   undefined4 DAT_005ff664
;   undefined4 DAT_005ffeac
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cec70
        ;   Label: core_gore.cpp_CGore_loadAssets_FUN_004cec70
    PUSH ESI                            ; 004cec71
    PUSH EDI                            ; 004cec72
    PUSH EBP                            ; 004cec73
    PUSH 0x5fed34                       ; 004cec74 | DAT_005fed34
    MOV EDX,dword ptr [0x005f2afc]      ; 004cec79 | DAT_005f2afc
    PUSH EDX                            ; 004cec7f | DAT_01bdd7e4
    MOV EBX,0x5fed4c                    ; 004cec80 | DAT_005fed4c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004cec85
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA ESI,[EBX + 0x60]                ; 004cec8a | DAT_005fedac
    ADD ESP,0x8                         ; 004cec8d
    PUSH EBX                            ; 004cec90 | DAT_005fed4c | DAT_005fed64
        ;   Label: LAB_004cec90
    MOV ECX,dword ptr [0x005f2afc]      ; 004cec91 | DAT_005f2afc
    PUSH ECX                            ; 004cec97 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004cec98
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 004cec9d
    ADD ESP,0x8                         ; 004ceca0
    CMP EBX,ESI                         ; 004ceca3
    JNZ 0x004cec90                      ; 004ceca5
        ;   XREF to: 004cec90 (CONDITIONAL_JUMP)  ; LAB_004cec90
    MOV EBP,0x5fedac                    ; 004ceca7 | DAT_005fedac
    XOR EDI,EDI                         ; 004cecac
    ADD EBP,0x180                       ; 004cecae
    IMUL EBX,EDI,0x180                  ; 004cecb4
        ;   Label: LAB_004cecb4
    MOV ESI,EBP                         ; 004cecba
    ADD EBX,0x5fedac                    ; 004cecbc | DAT_005fedac
    PUSH EBX                            ; 004cecc2 | DAT_005fedac | DAT_005fedc4 | DAT_005fef2c
        ;   Label: LAB_004cecc2
    MOV EAX,[0x005f2afc]                ; 004cecc3 | DAT_005f2afc
    PUSH EAX                            ; 004cecc8 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004cecc9
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 004cecce
    ADD ESP,0x8                         ; 004cecd1
    CMP EBX,ESI                         ; 004cecd4
    JNZ 0x004cecc2                      ; 004cecd6
        ;   XREF to: 004cecc2 (CONDITIONAL_JUMP)  ; LAB_004cecc2
    INC EDI                             ; 004cecd8
    ADD EBP,0x180                       ; 004cecd9
    CMP EDI,0x4                         ; 004cecdf
    JL 0x004cecb4                       ; 004cece2
        ;   XREF to: 004cecb4 (CONDITIONAL_JUMP)  ; LAB_004cecb4
    MOV EBP,0x5ff3ac                    ; 004cece4 | DAT_005ff3ac
    XOR EDI,EDI                         ; 004cece9
    ADD EBP,0x2b8                       ; 004ceceb
    IMUL EBX,EDI,0x2b8                  ; 004cecf1
        ;   Label: LAB_004cecf1
    MOV ESI,EBP                         ; 004cecf7
    ADD EBX,0x5ff3ac                    ; 004cecf9 | DAT_005ff3ac
    PUSH EBX                            ; 004cecff | DAT_005ff3ac | DAT_005ff3c4 | DAT_005ff664
        ;   Label: LAB_004cecff
    MOV EDX,dword ptr [0x005f2afc]      ; 004ced00 | DAT_005f2afc
    PUSH EDX                            ; 004ced06 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004ced07
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 004ced0c
    ADD ESP,0x8                         ; 004ced0f
    CMP EBX,ESI                         ; 004ced12
    JNZ 0x004cecff                      ; 004ced14
        ;   XREF to: 004cecff (CONDITIONAL_JUMP)  ; LAB_004cecff
    INC EDI                             ; 004ced16
    ADD EBP,0x2b8                       ; 004ced17
    CMP EDI,0x4                         ; 004ced1d
    JL 0x004cecf1                       ; 004ced20
        ;   XREF to: 004cecf1 (CONDITIONAL_JUMP)  ; LAB_004cecf1
    PUSH 0x5ffeac                       ; 004ced22 | DAT_005ffeac
    MOV ECX,dword ptr [0x005f2afc]      ; 004ced27 | DAT_005f2afc
    PUSH ECX                            ; 004ced2d | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004ced2e
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004ced33
    POP EBP                             ; 004ced36
    POP EDI                             ; 004ced37
    POP ESI                             ; 004ced38
    POP EBX                             ; 004ced39
    RET                                 ; 004ced3a

