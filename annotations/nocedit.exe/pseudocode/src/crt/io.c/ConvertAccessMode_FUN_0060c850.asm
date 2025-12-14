; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_io.c_ConvertAccessMode_FUN_0060c850(int access_mode, DWORD * desired_access, DWORD * share_mode)
;
; Parameters:
; int              Stack[0x4]:4   access_mode
; DWORD *          Stack[0x8]:4   desired_access
; DWORD *          Stack[0xc]:4   share_mode
;
; XREF[1]:
;   crt_stdio.c_CreateFileImpl_FUN_006090a0 at 006090da
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060c850
        ;   Label: crt_io.c_ConvertAccessMode_FUN_0060c850
    MOV EDX,dword ptr [ESP + 0xc]       ; 0060c851
    MOV EAX,dword ptr [ESP + 0x10]      ; 0060c855
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060c859
    CMP EBX,0x2                         ; 0060c85d
    JNZ 0x0060c870                      ; 0060c860
        ;   XREF to: 0060c870 (CONDITIONAL_JUMP)  ; LAB_0060c870
    MOV dword ptr [EDX],0xc0000000      ; 0060c862
    MOV dword ptr [EAX],0x80            ; 0060c868
    POP EBX                             ; 0060c86e
    RET                                 ; 0060c86f
    CMP EBX,0x1                         ; 0060c870
        ;   Label: LAB_0060c870
    JNZ 0x0060c883                      ; 0060c873
        ;   XREF to: 0060c883 (CONDITIONAL_JUMP)  ; LAB_0060c883
    MOV dword ptr [EDX],0x40000000      ; 0060c875
    MOV dword ptr [EAX],0x80            ; 0060c87b
    POP EBX                             ; 0060c881
    RET                                 ; 0060c882
    MOV dword ptr [EDX],0x80000000      ; 0060c883
        ;   Label: LAB_0060c883
    MOV dword ptr [EAX],0x1             ; 0060c889
    POP EBX                             ; 0060c88f
    RET                                 ; 0060c890

