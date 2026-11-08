; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_005b2580(void)
;
;
; XREF[8]:
;   FUN_00493720 at 004939c3
;   FUN_00493d40 at 00493eee
;   FUN_00494690 at 00494aea
;   FUN_004958d0 at 00495b33
;   FUN_0049a9b0 at 0049aac0
;   FUN_004d27b0 at 004d285f
;   FUN_004d77d0 at 004d7ba2
;   FUN_005b4cd0 at 005b4fd7
;
; Referenced Globals:
;   undefined4 DAT_02c9a618
;   undefined4 DAT_02c9a61c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c9a61c]      ; 005b2580 | DAT_02c9a61c
        ;   Label: FUN_005b2580
    MOV EAX,[0x02c9a618]                ; 005b2586 | DAT_02c9a618
    CMP EAX,EDX                         ; 005b258b
    SETNZ AL                            ; 005b258d
    AND EAX,0xff                        ; 005b2590
    RET                                 ; 005b2595

