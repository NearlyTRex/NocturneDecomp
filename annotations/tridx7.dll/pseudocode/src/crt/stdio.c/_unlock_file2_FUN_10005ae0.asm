; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c__unlock_file2_FUN_10005ae0(int index,void *stream)
;
; Parameters:
; int              Stack[0x4]:4   index
; void *           Stack[0x8]:4   stream
;
; XREF[2]:
;   crt_stdio.c__flsall_FUN_10005d90 at 10005e24
;   crt_stdio.c__getstream_FUN_10006c40 at 10006c8f
;
; Referenced Globals:
;   void* PTR_LeaveCriticalSection_102421bc = 002423e4
;
; Called Functions:
;   crt_thread.c__unlock_FUN_10005a10
;   LeaveCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 10005ae0
        ;   Label: crt_stdio.c__unlock_file2_FUN_10005ae0
    MOV EAX,dword ptr [ESP + 0x8]       ; 10005ae1
    MOV EBP,ESP                         ; 10005ae5
    CMP EAX,0x14                        ; 10005ae7
    JGE 0x10005af9                      ; 10005aea
        ;   XREF to: 10005af9 (CONDITIONAL_JUMP)  ; LAB_10005af9
    ADD EAX,0x1c                        ; 10005aec
    PUSH EAX                            ; 10005aef
    CALL crt_thread.c__unlock_FUN_10005a10 ; 10005af0
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_FUN_10005a10(int locknum)
    MOV ESP,EBP                         ; 10005af5
    POP EBP                             ; 10005af7
    RET                                 ; 10005af8
    MOV EAX,dword ptr [EBP + 0xc]       ; 10005af9
        ;   Label: LAB_10005af9
    ADD EAX,0x20                        ; 10005afc
    PUSH EAX                            ; 10005aff
    CALL dword ptr [0x102421bc]         ; 10005b00 | PTR_LeaveCriticalSection_102421bc
    POP EBP                             ; 10005b06
    RET                                 ; 10005b07

