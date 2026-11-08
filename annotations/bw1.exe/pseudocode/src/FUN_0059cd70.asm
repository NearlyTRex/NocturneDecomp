; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0059cd70(undefined4 *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_0052c970 at 0052c9ae
;
; Called Functions:
;   Ordinal_12
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0059cd70
        ;   Label: FUN_0059cd70
    CMP dword ptr [ESP + 0xc],0x0       ; 0059cd73
    SETZ AL                             ; 0059cd78
    AND EAX,0xff                        ; 0059cd7b
    MOV dword ptr [ESP],EAX             ; 0059cd80
    MOV EAX,ESP                         ; 0059cd83
    PUSH EAX                            ; 0059cd85
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059cd86
    PUSH 0x8004667e                     ; 0059cd8a
    MOV ECX,dword ptr [EAX]             ; 0059cd8f
    PUSH ECX                            ; 0059cd91
    CALL Ordinal_12                     ; 0059cd92
        ;   XREF to: 005cf7ea (UNCONDITIONAL_CALL)  ; undefined Ordinal_12()
    TEST EAX,EAX                        ; 0059cd97
    SETZ AL                             ; 0059cd99
    AND EAX,0xff                        ; 0059cd9c
    ADD ESP,0x4                         ; 0059cda1
    RET                                 ; 0059cda4

