; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_special_cpp_updateTexture_FUN_00532440(undefined4 param_1,undefined4 param_2)
;
;
; XREF[3]:
;   engine_texture.cpp_FUN_00545a10 at 00545a2a
;   engine_texture.cpp_ensureTextureLoaded_FUN_00545920 at 005459bc
;   engine_texture.cpp_loadAndUpdateTexture_FUN_00545a40 at 00545a58
;
; Referenced Globals:
;   undefined4 DAT_005b762c
;   undefined4 DAT_01c02580
;   undefined4 DAT_01c02584
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9da0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00532440
        ;   Label: engine_special.cpp_updateTexture_FUN_00532440
    CMP dword ptr [0x01c02594],0x0      ; 00532441 | DAT_01c02594
    JNZ 0x0053244e                      ; 00532448
        ;   XREF to: 0053244e (CONDITIONAL_JUMP)  ; LAB_0053244e
    XOR EAX,EAX                         ; 0053244a
    POP EBP                             ; 0053244c
    RET                                 ; 0053244d
    PUSH EDI                            ; 0053244e
        ;   Label: LAB_0053244e
    PUSH ESI                            ; 0053244f
    PUSH EBX                            ; 00532450
    MOV ECX,dword ptr [0x01c02584]      ; 00532451 | DAT_01c02584
    PUSH ECX                            ; 00532457
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00532458
    PUSH EBX                            ; 0053245c
    MOV ESI,dword ptr [0x01c02580]      ; 0053245d | DAT_01c02580
    PUSH ESI                            ; 00532463
    MOV EDI,dword ptr [0x005b762c]      ; 00532464 | DAT_005b762c
    PUSH EDI                            ; 0053246a
    MOV EBP,dword ptr [ESP + 0x24]      ; 0053246b
    PUSH EBP                            ; 0053246f
    CALL dword ptr [0x02dc9da0]         ; 00532470 | DAT_02dc9da0
    ADD ESP,0x14                        ; 00532476
    POP EBX                             ; 00532479
    POP ESI                             ; 0053247a
    POP EDI                             ; 0053247b
    POP EBP                             ; 0053247c
    RET                                 ; 0053247d

