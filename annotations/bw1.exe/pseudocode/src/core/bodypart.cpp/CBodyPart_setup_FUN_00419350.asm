; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_setup_FUN_00419350(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_actor.cpp_FUN_00408850
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419350
        ;   Label: core_bodypart.cpp_CBodyPart_setup_FUN_00419350
    PUSH EDI                            ; 00419351
    PUSH EBP                            ; 00419352
    MOV EDI,dword ptr [ESP + 0x10]      ; 00419353
    PUSH EDI                            ; 00419357
    CALL core_actor.cpp_FUN_00408850    ; 00419358
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408850(CDemonActor * this_ptr)
    XOR EBX,EBX                         ; 0041935d
    MOV EDX,dword ptr [EDI + 0x18c]     ; 0041935f
    ADD ESP,0x4                         ; 00419365
    TEST EDX,EDX                        ; 00419368
    JLE 0x00419392                      ; 0041936a
        ;   XREF to: 00419392 (CONDITIONAL_JUMP)  ; LAB_00419392
    PUSH ESI                            ; 0041936c
    LEA ESI,[EDI + 0x190]               ; 0041936d
    PUSH ESI                            ; 00419373
        ;   Label: LAB_00419373
    MOV ECX,dword ptr [0x00612560]      ; 00419374 | DAT_00612560
    PUSH ECX                            ; 0041937a | DAT_01bc120c
    INC EBX                             ; 0041937b
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 0041937c
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESI,0x18                        ; 00419381
    MOV EBP,dword ptr [EDI + 0x18c]     ; 00419384
    ADD ESP,0x8                         ; 0041938a
    CMP EBX,EBP                         ; 0041938d
    JL 0x00419373                       ; 0041938f
        ;   XREF to: 00419373 (CONDITIONAL_JUMP)  ; LAB_00419373
    POP ESI                             ; 00419391
    CMP dword ptr [EDI + 0xcb4],0x0     ; 00419392
        ;   Label: LAB_00419392
    JNZ 0x004193a8                      ; 00419399
        ;   XREF to: 004193a8 (CONDITIONAL_JUMP)  ; LAB_004193a8
    CMP dword ptr [EDI + 0x74c],0x0     ; 0041939b
    JNZ 0x004193a8                      ; 004193a2
        ;   XREF to: 004193a8 (CONDITIONAL_JUMP)  ; LAB_004193a8
    POP EBP                             ; 004193a4
    POP EDI                             ; 004193a5
    POP EBX                             ; 004193a6
    RET                                 ; 004193a7
    MOV dword ptr [EDI + 0xfc],0x1      ; 004193a8
        ;   Label: LAB_004193a8
    POP EBP                             ; 004193b2
    POP EDI                             ; 004193b3
    POP EBX                             ; 004193b4
    RET                                 ; 004193b5

