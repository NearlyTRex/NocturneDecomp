; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_morph_cpp_FUN_005c4260(byte *param_1)
;
;
; XREF[7]:
;   crt_unknown.c_FUN_005c0cf0 at 005c0cfe
;   crt_unknown.c_FUN_005c0d60 at 005c0d6e
;   crt_unknown.c_FUN_005c1b50 at 005c1b67
;   unkafter_2d.cpp_FUN_005c5810 at 005c5839
;   unkafter_2d.cpp_FUN_005c5c00 at 005c5c0c
;   unkafter_2d.cpp_FUN_005c68e0 at 005c68e9
;   unkafter_morph.cpp_FUN_005c3e70 at 005c3e7b
;
; Referenced Globals:
;   undefined4 DAT_026807f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c4260
        ;   Label: unkafter_morph.cpp_FUN_005c4260
    CMP byte ptr [EDX],0x0              ; 005c4264
    JNZ 0x005c426f                      ; 005c4267
        ;   XREF to: 005c426f (CONDITIONAL_JUMP)  ; LAB_005c426f
    MOV EAX,0x1                         ; 005c4269
    RET                                 ; 005c426e
    CMP dword ptr [0x026807f0],0x0      ; 005c426f | DAT_026807f0
        ;   Label: LAB_005c426f
    JZ 0x005c4297                       ; 005c4276
        ;   XREF to: 005c4297 (CONDITIONAL_JUMP)  ; LAB_005c4297
    XOR EAX,EAX                         ; 005c4278
    MOV AL,byte ptr [EDX]               ; 005c427a
    MOV AL,byte ptr [EAX + 0x2680801]   ; 005c427c
    AND AL,0x1                          ; 005c4282
    AND EAX,0xff                        ; 005c4284
    JZ 0x005c4297                       ; 005c4289
        ;   XREF to: 005c4297 (CONDITIONAL_JUMP)  ; LAB_005c4297
    CMP byte ptr [EDX + 0x1],0x0        ; 005c428b
    JNZ 0x005c4297                      ; 005c428f
        ;   XREF to: 005c4297 (CONDITIONAL_JUMP)  ; LAB_005c4297
    MOV EAX,0x2                         ; 005c4291
    RET                                 ; 005c4296
    XOR EAX,EAX                         ; 005c4297
        ;   Label: LAB_005c4297
    RET                                 ; 005c4299

