; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_unknown_c___CClose_FUN_005633c4(_FILE *file_handle,int close_flags)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_handle
; int              Stack[0x8]:4   close_flags
;
; XREF[2]:
;   FUN_0056deac at 0056defc
;   crt_stdio.c_fclose_FUN_00563380 at 005633b7
;
; Called Functions:
;   crt_stdio.c___freefp_FUN_00568620
;   crt_unknown.c_fclose_FUN_005634b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005633c4
        ;   Label: crt_unknown.c___CClose_FUN_005633c4
    MOV EDX,dword ptr [ESP + 0xc]       ; 005633c5
    PUSH EDX                            ; 005633c9
    MOV EBX,dword ptr [ESP + 0xc]       ; 005633ca
    PUSH EBX                            ; 005633ce
    CALL crt_unknown.c_fclose_FUN_005634b0 ; 005633cf
        ;   XREF to: 005634b0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_fclose_FUN_005634b0(_FILE * file_handle, int force_close_flag)
    ADD ESP,0x8                         ; 005633d4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005633d7
    PUSH ECX                            ; 005633db
    MOV EBX,EAX                         ; 005633dc
    CALL crt_stdio.c___freefp_FUN_00568620 ; 005633de
        ;   XREF to: 00568620 (UNCONDITIONAL_CALL)  ; void crt_stdio.c___freefp_FUN_00568620(_FILE * file_handle)
    ADD ESP,0x4                         ; 005633e3
    MOV EAX,EBX                         ; 005633e6
    POP EBX                             ; 005633e8
    RET                                 ; 005633e9

