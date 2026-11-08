; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005627f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0044fc80
;   FUN_004ce240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005627f0
        ;   Label: FUN_005627f0
    PUSH EBP                            ; 005627f1
    MOV EBP,ESP                         ; 005627f2
    MOV EBX,dword ptr [EBP + 0xc]       ; 005627f4
    PUSH EBX                            ; 005627f7
    CALL FUN_004ce240                   ; 005627f8
        ;   XREF to: 004ce240 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce240()
    ADD ESP,0x4                         ; 005627fd
    ADD EAX,0x25744                     ; 00562800
    PUSH EAX                            ; 00562805
    CALL FUN_0044fc80                   ; 00562806
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    LEA EBX,[EAX + 0xfffda8bc]          ; 0056280b
    MOV dword ptr [EBX + 0x2b0],0x5fc214 ; 00562811
    MOV dword ptr [EBX + 0x25640],0x0   ; 0056281b
    MOV dword ptr [EBX + 0x25644],0x0   ; 00562825
    MOV dword ptr [EBX + 0x25648],0x0   ; 0056282f
    MOV dword ptr [EBX + 0x2564c],0xbf060a92 ; 00562839
    MOV dword ptr [EBX + 0x2566c],0x0   ; 00562843
    MOV dword ptr [EBX + 0x25664],0x0   ; 0056284d
    MOV dword ptr [EBX + 0x2565c],0x0   ; 00562857
    MOV dword ptr [EBX + 0x25654],0x0   ; 00562861
    MOV dword ptr [EBX + 0x25668],0x0   ; 0056286b
    MOV dword ptr [EBX + 0x25670],0x0   ; 00562875
    MOV dword ptr [EBX + 0x2568c],0x0   ; 0056287f
    MOV dword ptr [EBX + 0x25684],0x0   ; 00562889
    MOV dword ptr [EBX + 0x2567c],0x0   ; 00562893
    MOV dword ptr [EBX + 0x25674],0x0   ; 0056289d
    MOV dword ptr [EBX + 0x25688],0x0   ; 005628a7

