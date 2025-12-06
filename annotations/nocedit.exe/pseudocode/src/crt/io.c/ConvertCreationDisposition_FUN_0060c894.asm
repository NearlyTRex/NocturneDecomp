; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_io.c_ConvertCreationDisposition_FUN_0060c894(DWORD mode_flags, DWORD * creation_disposition)
;
; Parameters:
; typedef DWORD ulong Stack[0x4]:4   mode_flags
; DWORD *          Stack[0x8]:4   creation_disposition
;
; XREF[1]:
;   crt_stdio.c_CreateFileImpl_FUN_006090a0 at 006090f3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060c894
        ;   Label: crt_io.c_ConvertCreationDisposition_FUN_0060c894
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060c895
    MOV EDX,dword ptr [ESP + 0xc]       ; 0060c899
    MOV EAX,EBX                         ; 0060c89d
    AND EAX,0x70                        ; 0060c89f
    AND EBX,0x7                         ; 0060c8a2
    CMP EAX,0x20                        ; 0060c8a5
    JC 0x0060c8ba                       ; 0060c8a8 | LAB_0060c8ba
        ;   XREF to: 0060c8ba (CONDITIONAL_JUMP)
    JBE 0x0060c8e4                      ; 0060c8aa | LAB_0060c8e4
        ;   XREF to: 0060c8e4 (CONDITIONAL_JUMP)
    CMP EAX,0x30                        ; 0060c8ac
    JC 0x0060c8f2                       ; 0060c8af | LAB_0060c8f2
        ;   XREF to: 0060c8f2 (CONDITIONAL_JUMP)
    JBE 0x0060c8dc                      ; 0060c8b1 | LAB_0060c8dc
        ;   XREF to: 0060c8dc (CONDITIONAL_JUMP)
    CMP EAX,0x40                        ; 0060c8b3
    JZ 0x0060c8ec                       ; 0060c8b6 | LAB_0060c8ec
        ;   XREF to: 0060c8ec (CONDITIONAL_JUMP)
    POP EBX                             ; 0060c8b8
    RET                                 ; 0060c8b9
    TEST EAX,EAX                        ; 0060c8ba
        ;   Label: LAB_0060c8ba
    JBE 0x0060c8c5                      ; 0060c8bc | LAB_0060c8c5
        ;   XREF to: 0060c8c5 (CONDITIONAL_JUMP)
    CMP EAX,0x10                        ; 0060c8be
    JZ 0x0060c8d4                       ; 0060c8c1 | LAB_0060c8d4
        ;   XREF to: 0060c8d4 (CONDITIONAL_JUMP)
    POP EBX                             ; 0060c8c3
    RET                                 ; 0060c8c4
    MOV dword ptr [EDX],0x1             ; 0060c8c5
        ;   Label: LAB_0060c8c5
    TEST EBX,EBX                        ; 0060c8cb
    JNZ 0x0060c8f2                      ; 0060c8cd | LAB_0060c8f2
        ;   XREF to: 0060c8f2 (CONDITIONAL_JUMP)
    OR byte ptr [EDX],0x2               ; 0060c8cf
    POP EBX                             ; 0060c8d2
    RET                                 ; 0060c8d3
    MOV dword ptr [EDX],0x0             ; 0060c8d4
        ;   Label: LAB_0060c8d4
    POP EBX                             ; 0060c8da
    RET                                 ; 0060c8db
    MOV dword ptr [EDX],0x2             ; 0060c8dc
        ;   Label: LAB_0060c8dc
    POP EBX                             ; 0060c8e2
    RET                                 ; 0060c8e3
    MOV dword ptr [EDX],0x1             ; 0060c8e4
        ;   Label: LAB_0060c8e4
    POP EBX                             ; 0060c8ea
    RET                                 ; 0060c8eb
    MOV dword ptr [EDX],0x3             ; 0060c8ec
        ;   Label: LAB_0060c8ec
    POP EBX                             ; 0060c8f2
        ;   Label: LAB_0060c8f2
    RET                                 ; 0060c8f3

