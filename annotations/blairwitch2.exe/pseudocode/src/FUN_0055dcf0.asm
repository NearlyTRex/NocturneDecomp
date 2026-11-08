; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055dcf0(void)
;
;
; XREF[2]:
;   FUN_0055e8c0 at 0055f26d
;   FUN_0055f4d0 at 0055f4e5
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bbb8
;   undefined4 DAT_0264bbbc
;   undefined4 DAT_0264bbc0
;   undefined4 DAT_0264bbc4
;   undefined4 DAT_0264bbc8
;   undefined4 DAT_0264bbcc
;   undefined4 DAT_0264bbd0
;   undefined4 DAT_0264bbd4
;   undefined4 DAT_0264bbd8
;   undefined4 DAT_0264bbdc
;   undefined4 DAT_0264bbe0
;   undefined4 DAT_0264bbe4
;   undefined4 DAT_0264bbf0
;   undefined4 DAT_0264bbf4
;   ... and 59 more
;
; Called Functions:
;   FUN_00589960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055dcf0
        ;   Label: FUN_0055dcf0
    PUSH EBP                            ; 0055dcf1
    XOR EDX,EDX                         ; 0055dcf2
    MOV EBX,dword ptr [0x0264bce0]      ; 0055dcf4 | DAT_0264bce0
    MOV dword ptr [0x01c37788],EDX      ; 0055dcfa | DAT_01c37788
    MOV dword ptr [0x0264bcdc],EDX      ; 0055dd00 | DAT_0264bcdc
    TEST EBX,EBX                        ; 0055dd06
    JNZ 0x0055debd                      ; 0055dd08
        ;   XREF to: 0055debd (CONDITIONAL_JUMP)  ; LAB_0055debd
    XOR EBP,EBP                         ; 0055dd0e
        ;   Label: LAB_0055dd0e
    MOV dword ptr [0x0264bbbc],EBP      ; 0055dd10 | DAT_0264bbbc
    MOV dword ptr [0x0264bbc0],EBP      ; 0055dd16 | DAT_0264bbc0
    MOV dword ptr [0x0264bbc4],EBP      ; 0055dd1c | DAT_0264bbc4
    MOV dword ptr [0x0264bbc8],EBP      ; 0055dd22 | DAT_0264bbc8
    MOV dword ptr [0x0264bbcc],EBP      ; 0055dd28 | DAT_0264bbcc
    MOV dword ptr [0x0264bbd0],EBP      ; 0055dd2e | DAT_0264bbd0
    MOV dword ptr [0x0264bbd4],EBP      ; 0055dd34 | DAT_0264bbd4
    MOV dword ptr [0x0264bbd8],EBP      ; 0055dd3a | DAT_0264bbd8
    MOV dword ptr [0x0264bbdc],EBP      ; 0055dd40 | DAT_0264bbdc
    MOV dword ptr [0x0264bbe0],EBP      ; 0055dd46 | DAT_0264bbe0
    MOV dword ptr [0x0264bbe4],EBP      ; 0055dd4c | DAT_0264bbe4
    MOV dword ptr [0x0264bbf0],EBP      ; 0055dd52 | DAT_0264bbf0
    MOV dword ptr [0x0264bbf4],EBP      ; 0055dd58 | DAT_0264bbf4
    MOV dword ptr [0x0264bbf8],EBP      ; 0055dd5e | DAT_0264bbf8
    MOV dword ptr [0x0264bbfc],EBP      ; 0055dd64 | DAT_0264bbfc
    MOV dword ptr [0x0264bc00],EBP      ; 0055dd6a | DAT_0264bc00
    MOV dword ptr [0x0264bc04],EBP      ; 0055dd70 | DAT_0264bc04
    MOV dword ptr [0x0264bc08],EBP      ; 0055dd76 | DAT_0264bc08
    MOV dword ptr [0x0264bc0c],EBP      ; 0055dd7c | DAT_0264bc0c
    MOV dword ptr [0x0264bc10],EBP      ; 0055dd82 | DAT_0264bc10
    MOV dword ptr [0x0264bc14],EBP      ; 0055dd88 | DAT_0264bc14
    MOV dword ptr [0x0264bc18],EBP      ; 0055dd8e | DAT_0264bc18
    MOV dword ptr [0x0264bc1c],EBP      ; 0055dd94 | DAT_0264bc1c
    MOV dword ptr [0x0264bc20],EBP      ; 0055dd9a | DAT_0264bc20
    MOV dword ptr [0x0264bc24],EBP      ; 0055dda0 | DAT_0264bc24
    MOV dword ptr [0x0264bc28],EBP      ; 0055dda6 | DAT_0264bc28
    MOV dword ptr [0x0264bc2c],EBP      ; 0055ddac | DAT_0264bc2c
    MOV dword ptr [0x0264bc30],EBP      ; 0055ddb2 | DAT_0264bc30
    MOV dword ptr [0x0264bc34],EBP      ; 0055ddb8 | DAT_0264bc34
    MOV dword ptr [0x0264bc38],EBP      ; 0055ddbe | DAT_0264bc38
    MOV dword ptr [0x0264bc3c],EBP      ; 0055ddc4 | DAT_0264bc3c
    MOV dword ptr [0x0264bc40],EBP      ; 0055ddca | DAT_0264bc40
    MOV dword ptr [0x0264bc44],EBP      ; 0055ddd0 | DAT_0264bc44
    MOV dword ptr [0x0264bc48],EBP      ; 0055ddd6 | DAT_0264bc48
    MOV dword ptr [0x0264bc4c],EBP      ; 0055dddc | DAT_0264bc4c
    MOV dword ptr [0x0264bc50],EBP      ; 0055dde2 | DAT_0264bc50
    MOV dword ptr [0x0264bc54],EBP      ; 0055dde8 | DAT_0264bc54
    MOV dword ptr [0x0264bc58],EBP      ; 0055ddee | DAT_0264bc58
    MOV dword ptr [0x0264bc5c],EBP      ; 0055ddf4 | DAT_0264bc5c
    MOV dword ptr [0x0264bc60],EBP      ; 0055ddfa | DAT_0264bc60
    MOV dword ptr [0x0264bc64],EBP      ; 0055de00 | DAT_0264bc64
    MOV dword ptr [0x0264bc68],EBP      ; 0055de06 | DAT_0264bc68
    MOV dword ptr [0x0264bc6c],EBP      ; 0055de0c | DAT_0264bc6c
    MOV dword ptr [0x0264bc70],EBP      ; 0055de12 | DAT_0264bc70
    MOV dword ptr [0x0264bc74],EBP      ; 0055de18 | DAT_0264bc74
    MOV dword ptr [0x0264bc78],EBP      ; 0055de1e | DAT_0264bc78
    MOV dword ptr [0x0264bc7c],EBP      ; 0055de24 | DAT_0264bc7c
    MOV dword ptr [0x0264bc80],EBP      ; 0055de2a | DAT_0264bc80
    MOV dword ptr [0x0264bc84],EBP      ; 0055de30 | DAT_0264bc84
    MOV dword ptr [0x0264bc88],EBP      ; 0055de36 | DAT_0264bc88
    MOV dword ptr [0x0264bc8c],EBP      ; 0055de3c | DAT_0264bc8c
    MOV dword ptr [0x0264bc90],EBP      ; 0055de42 | DAT_0264bc90
    MOV dword ptr [0x0264bc94],EBP      ; 0055de48 | DAT_0264bc94
    MOV dword ptr [0x0264bc98],EBP      ; 0055de4e | DAT_0264bc98
    MOV dword ptr [0x0264bc9c],EBP      ; 0055de54 | DAT_0264bc9c
    MOV dword ptr [0x0264bca0],EBP      ; 0055de5a | DAT_0264bca0
    MOV dword ptr [0x0264bca4],EBP      ; 0055de60 | DAT_0264bca4
    MOV dword ptr [0x0264bca8],EBP      ; 0055de66 | DAT_0264bca8
    MOV dword ptr [0x0264bcac],EBP      ; 0055de6c | DAT_0264bcac
    MOV dword ptr [0x0264bcb0],EBP      ; 0055de72 | DAT_0264bcb0
    MOV dword ptr [0x0264bcb4],EBP      ; 0055de78 | DAT_0264bcb4
    MOV dword ptr [0x0264bcb8],EBP      ; 0055de7e | DAT_0264bcb8
    MOV dword ptr [0x0264bcbc],EBP      ; 0055de84 | DAT_0264bcbc
    MOV dword ptr [0x0264bcc0],EBP      ; 0055de8a | DAT_0264bcc0
    MOV dword ptr [0x0264bcc4],EBP      ; 0055de90 | DAT_0264bcc4
    MOV dword ptr [0x0264bcc8],EBP      ; 0055de96 | DAT_0264bcc8
    MOV dword ptr [0x0264bccc],EBP      ; 0055de9c | DAT_0264bccc
    MOV dword ptr [0x0264bcd0],EBP      ; 0055dea2 | DAT_0264bcd0
    MOV dword ptr [0x0264bcd4],EBP      ; 0055dea8 | DAT_0264bcd4
    MOV dword ptr [0x0264bcd8],EBP      ; 0055deae | DAT_0264bcd8
    MOV dword ptr [0x0264bbb8],EBP      ; 0055deb4 | DAT_0264bbb8
    POP EBP                             ; 0055deba
    POP EBX                             ; 0055debb
    RET                                 ; 0055debc
    PUSH EDI                            ; 0055debd
        ;   Label: LAB_0055debd
    PUSH EBX                            ; 0055debe
    CALL FUN_00589960                   ; 0055debf
        ;   XREF to: 00589960 (UNCONDITIONAL_CALL)  ; undefined FUN_00589960()
    XOR EDI,EDI                         ; 0055dec4
    ADD ESP,0x4                         ; 0055dec6
    MOV dword ptr [0x0264bce0],EDI      ; 0055dec9 | DAT_0264bce0
    POP EDI                             ; 0055decf
    JMP 0x0055dd0e                      ; 0055ded0
        ;   XREF to: 0055dd0e (UNCONDITIONAL_JUMP)  ; LAB_0055dd0e

