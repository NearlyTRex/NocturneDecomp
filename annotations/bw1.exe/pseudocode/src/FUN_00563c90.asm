; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00563c90(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00569b50 at 00569c0b
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00563c90
        ;   Label: FUN_00563c90
    LEA EAX,[EDX*0x4 + 0x0]             ; 00563c94
    SUB EAX,EDX                         ; 00563c9b
    LEA EDX,[EAX*0x4 + 0x0]             ; 00563c9d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00563ca4
    ADD EAX,0x2290                      ; 00563ca8
    ADD EAX,EDX                         ; 00563cad
    RET                                 ; 00563caf

