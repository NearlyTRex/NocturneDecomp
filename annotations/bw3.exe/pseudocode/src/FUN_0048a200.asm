; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0048a200(undefined4 param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_00428fc0 at 00428fe7
;   FUN_00458ec0 at 00458ee7
;   FUN_0058caf0 at 0058cb17
;
; Referenced Globals:
;   TerminatedCString s_CBugs_005bdd18
;
; Called Functions:
;   FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH 0x5bdd18                       ; 0048a200 | = "CBugs"
        ;   Label: FUN_0048a200
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048a205
    PUSH EDX                            ; 0048a209
    CALL FUN_0040c790                   ; 0048a20a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 0048a20f
    TEST EAX,EAX                        ; 0048a212
    SETNZ AL                            ; 0048a214
    AND EAX,0xff                        ; 0048a217
    RET                                 ; 0048a21c

