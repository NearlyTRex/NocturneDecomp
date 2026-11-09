; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_processPolygonColor_FUN_00403de0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_00713a5c
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9ec
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00403de0
        ;   Label: engine_3d.c_processPolygonColor_FUN_00403de0
    MOV EDX,dword ptr [EAX + 0x4]       ; 00403de4
    MOV dword ptr [0x00713a5c],EDX      ; 00403de7 | DAT_00713a5c
    MOV DL,byte ptr [EAX + 0x7]         ; 00403ded
    TEST DL,0x80                        ; 00403df0
    JZ 0x00403e4e                       ; 00403df3
        ;   XREF to: 00403e4e (CONDITIONAL_JUMP)  ; LAB_00403e4e
    TEST DL,0x40                        ; 00403df5
    JNZ 0x00403e4e                      ; 00403df8
        ;   XREF to: 00403e4e (CONDITIONAL_JUMP)  ; LAB_00403e4e
    PUSH ESI                            ; 00403dfa
    PUSH EBX                            ; 00403dfb
    MOV ECX,dword ptr [0x0061b4a0]      ; 00403dfc | DAT_0061b4a0
    MOV EDX,dword ptr [EAX + 0x4]       ; 00403e02
    MOV EBX,dword ptr [EAX + 0x4]       ; 00403e05
    MOV ESI,dword ptr [EAX + 0x4]       ; 00403e08
    SAR EDX,0x8                         ; 00403e0b
    SAR EBX,0x10                        ; 00403e0e
    AND ESI,0xff                        ; 00403e11
    AND EDX,0xff                        ; 00403e17
    AND EBX,0xff                        ; 00403e1d
    CMP ECX,0x20                        ; 00403e23
    JNZ 0x00403e52                      ; 00403e26
        ;   XREF to: 00403e52 (CONDITIONAL_JUMP)  ; LAB_00403e52
    MOV CL,byte ptr [0x01c4e9d4]        ; 00403e28 | DAT_01c4e9d4
    SHL ESI,CL                          ; 00403e2e
    MOV CL,byte ptr [0x01c4e9e0]        ; 00403e30 | DAT_01c4e9e0
    SHL EDX,CL                          ; 00403e36
    MOV CL,byte ptr [0x01c4e9ec]        ; 00403e38 | DAT_01c4e9ec
    SHL EBX,CL                          ; 00403e3e
    OR EDX,ESI                          ; 00403e40
    MOV ECX,EBX                         ; 00403e42
    OR ECX,EDX                          ; 00403e44
    MOV dword ptr [0x00713a5c],ECX      ; 00403e46 | DAT_00713a5c
    POP EBX                             ; 00403e4c
    POP ESI                             ; 00403e4d
    ADD EAX,0x8                         ; 00403e4e
        ;   Label: LAB_00403e4e
    RET                                 ; 00403e51
    MOV ECX,ESI                         ; 00403e52
        ;   Label: LAB_00403e52
    SHL EDX,0x8                         ; 00403e54
    SHL ECX,0x10                        ; 00403e57
    OR ECX,EDX                          ; 00403e5a
    OR ECX,EBX                          ; 00403e5c
    MOV dword ptr [0x00713a5c],ECX      ; 00403e5e | DAT_00713a5c
    POP EBX                             ; 00403e64
    POP ESI                             ; 00403e65
    ADD EAX,0x8                         ; 00403e66
    RET                                 ; 00403e69

