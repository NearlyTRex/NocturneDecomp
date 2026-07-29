; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_setVertexTextureU_FUN_00406840(SMRGLHeaderExtended *mrgl)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl
;
; Referenced Globals:
;   undefined4 DAT_005c502c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406840
        ;   Label: engine_3d.c_setVertexTextureU_FUN_00406840
    MOV ECX,dword ptr [ESP + 0x8]       ; 00406841
    LEA EDX,[ECX + 0xc]                 ; 00406845
    MOV EBX,dword ptr [ECX + 0x8]       ; 00406848
    XOR EAX,EAX                         ; 0040684b
    TEST EBX,EBX                        ; 0040684d
    JLE 0x00406871                      ; 0040684f
        ;   XREF to: 00406871 (CONDITIONAL_JUMP)  ; LAB_00406871
    PUSH ESI                            ; 00406851
    MOV EBX,dword ptr [ECX + 0x4]       ; 00406852
        ;   Label: LAB_00406852
    ADD EBX,EAX                         ; 00406855
    IMUL EBX,EBX,0x30                   ; 00406857
    MOV ESI,dword ptr [EDX]             ; 0040685a
    SHL ESI,0x10                        ; 0040685c
    MOV dword ptr [EBX + 0x5c502c],ESI  ; 0040685f | DAT_005c502c
    INC EAX                             ; 00406865
    MOV ESI,dword ptr [ECX + 0x8]       ; 00406866
    ADD EDX,0x4                         ; 00406869
    CMP EAX,ESI                         ; 0040686c
    JL 0x00406852                       ; 0040686e
        ;   XREF to: 00406852 (CONDITIONAL_JUMP)  ; LAB_00406852
    POP ESI                             ; 00406870
    MOV EDX,dword ptr [ECX + 0x8]       ; 00406871
        ;   Label: LAB_00406871
    LEA EAX,[ECX + 0xc]                 ; 00406874
    SHL EDX,0x2                         ; 00406877
    ADD EAX,EDX                         ; 0040687a
    POP EBX                             ; 0040687c
    RET                                 ; 0040687d

