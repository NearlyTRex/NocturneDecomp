; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057d860(undefined4 *param_1)
;
;
; XREF[10]:
;   FUN_0057db80 at 0057db85
;   FUN_0057dba0 at 0057dba7
;   FUN_0057dbe0 at 0057dbe5
;   FUN_0057dc10 at 0057dc2e
;   FUN_0057de40 at 0057de45
;   FUN_0057de80 at 0057de87
;   FUN_0057dee0 at 0057dee5
;   FUN_0057df10 at 0057df2e
;   FUN_0057e1c0 at 0057e1c5
;   FUN_0057e1e0 at 0057e1f5
;
; Referenced Globals:
;   undefined1* PTR_FUN_005fd464 = 0057d860
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057d860
        ;   Label: FUN_0057d860
    MOV dword ptr [EAX],0x5fd464        ; 0057d864 | PTR_FUN_005fd464
    RET                                 ; 0057d86a

