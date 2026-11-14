; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_processPolygonColor_FUN_00403e50(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_0070ca5c
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c3582c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00403e50
        ;   Label: engine_3d.c_processPolygonColor_FUN_00403e50
    MOV EDX,dword ptr [EAX + 0x4]       ; 00403e54
    MOV dword ptr [0x0070ca5c],EDX      ; 00403e57 | DAT_0070ca5c
    MOV DL,byte ptr [EAX + 0x7]         ; 00403e5d
    TEST DL,0x80                        ; 00403e60
    JZ 0x00403ebe                       ; 00403e63
        ;   XREF to: 00403ebe (CONDITIONAL_JUMP)  ; LAB_00403ebe
    TEST DL,0x40                        ; 00403e65
    JNZ 0x00403ebe                      ; 00403e68
        ;   XREF to: 00403ebe (CONDITIONAL_JUMP)  ; LAB_00403ebe
    PUSH ESI                            ; 00403e6a
    PUSH EBX                            ; 00403e6b
    MOV ECX,dword ptr [0x006141c0]      ; 00403e6c | DAT_006141c0
    MOV EDX,dword ptr [EAX + 0x4]       ; 00403e72
    MOV EBX,dword ptr [EAX + 0x4]       ; 00403e75
    MOV ESI,dword ptr [EAX + 0x4]       ; 00403e78
    SAR EDX,0x8                         ; 00403e7b
    SAR EBX,0x10                        ; 00403e7e
    AND ESI,0xff                        ; 00403e81
    AND EDX,0xff                        ; 00403e87
    AND EBX,0xff                        ; 00403e8d
    CMP ECX,0x20                        ; 00403e93
    JNZ 0x00403ec2                      ; 00403e96
        ;   XREF to: 00403ec2 (CONDITIONAL_JUMP)  ; LAB_00403ec2
    MOV CL,byte ptr [0x01c35814]        ; 00403e98 | DAT_01c35814
    SHL ESI,CL                          ; 00403e9e
    MOV CL,byte ptr [0x01c35820]        ; 00403ea0 | DAT_01c35820
    SHL EDX,CL                          ; 00403ea6
    MOV CL,byte ptr [0x01c3582c]        ; 00403ea8 | DAT_01c3582c
    SHL EBX,CL                          ; 00403eae
    OR EDX,ESI                          ; 00403eb0
    MOV ECX,EBX                         ; 00403eb2
    OR ECX,EDX                          ; 00403eb4
    MOV dword ptr [0x0070ca5c],ECX      ; 00403eb6 | DAT_0070ca5c
    POP EBX                             ; 00403ebc
    POP ESI                             ; 00403ebd
    ADD EAX,0x8                         ; 00403ebe
        ;   Label: LAB_00403ebe
    RET                                 ; 00403ec1
    MOV ECX,ESI                         ; 00403ec2
        ;   Label: LAB_00403ec2
    SHL EDX,0x8                         ; 00403ec4
    SHL ECX,0x10                        ; 00403ec7
    OR ECX,EDX                          ; 00403eca
    OR ECX,EBX                          ; 00403ecc
    MOV dword ptr [0x0070ca5c],ECX      ; 00403ece | DAT_0070ca5c
    POP EBX                             ; 00403ed4
    POP ESI                             ; 00403ed5
    ADD EAX,0x8                         ; 00403ed6
    RET                                 ; 00403ed9

