; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004477f0(int param_1)
;
;
; XREF[1]:
;   FUN_0050e080 at 0050e15a
;
; Referenced Globals:
;   undefined4 DAT_01c039e8
;   undefined4 DAT_01c039ec
;   undefined4 DAT_01c039f0
;   undefined4 DAT_01c039f4
;   undefined4 DAT_01c039f8
;   undefined4 DAT_01c039fc
;   undefined4 DAT_01c03a00
;   undefined4 DAT_01c03a04
;   undefined4 DAT_01c03a08
;   undefined4 DAT_01cc5118
;   undefined4 DAT_01cc511c
;   undefined4 DAT_01cc5120
;   undefined4 DAT_01cc5124
;   undefined4 DAT_01cc5128
;   undefined4 DAT_01cc512c
;   ... and 3 more
;
; Called Functions:
;   engine_matrix.c_getCameraOrigin_FUN_004ce760
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004477f0
        ;   Label: FUN_004477f0
    PUSH EDI                            ; 004477f1
    SUB ESP,0xc                         ; 004477f2
    MOV ESI,ESP                         ; 004477f5
    CALL engine_matrix.c_getCameraOrigin_FUN_004ce760 ; 004477f7
        ;   XREF to: 004ce760 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_getCameraOrigin_FUN_004ce760()
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004477fc
    LEA EAX,[EDX*0x4 + 0x0]             ; 00447800
    SUB EAX,EDX                         ; 00447807
    MOV EDX,dword ptr [ESP + 0x18]      ; 00447809
    SHL EAX,0x2                         ; 0044780d
    ADD EAX,EDX                         ; 00447810
    LEA EDI,[EAX + 0x11ec]              ; 00447812
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00447818
    SHL EAX,0x2                         ; 0044781c
    MOV ESI,ESP                         ; 0044781f
    ADD EAX,EDX                         ; 00447821
    MOVSD ES:EDI,ESI                    ; 00447823
    MOVSD ES:EDI,ESI                    ; 00447824
    MOVSD ES:EDI,ESI                    ; 00447825
    MOV EDX,dword ptr [0x01c039e8]      ; 00447826 | DAT_01c039e8
    MOV dword ptr [EAX + 0x124c],EDX    ; 0044782c
    MOV EDX,dword ptr [0x01c039ec]      ; 00447832 | DAT_01c039ec
    MOV dword ptr [EAX + 0x126c],EDX    ; 00447838
    MOV EDX,dword ptr [0x01c039f0]      ; 0044783e | DAT_01c039f0
    MOV dword ptr [EAX + 0x128c],EDX    ; 00447844
    MOV EDX,dword ptr [0x01c039f4]      ; 0044784a | DAT_01c039f4
    MOV dword ptr [EAX + 0x12ac],EDX    ; 00447850
    MOV EDX,dword ptr [0x01c039f8]      ; 00447856 | DAT_01c039f8
    MOV dword ptr [EAX + 0x12cc],EDX    ; 0044785c
    MOV EDX,dword ptr [0x01c039fc]      ; 00447862 | DAT_01c039fc
    MOV dword ptr [EAX + 0x12ec],EDX    ; 00447868
    MOV EDX,dword ptr [0x01c03a00]      ; 0044786e | DAT_01c03a00
    MOV dword ptr [EAX + 0x130c],EDX    ; 00447874
    MOV EDX,dword ptr [0x01c03a04]      ; 0044787a | DAT_01c03a04
    MOV dword ptr [EAX + 0x132c],EDX    ; 00447880
    MOV EDX,dword ptr [0x01c03a08]      ; 00447886 | DAT_01c03a08
    MOV dword ptr [EAX + 0x134c],EDX    ; 0044788c
    MOV EDX,dword ptr [0x01cc5118]      ; 00447892 | DAT_01cc5118
    MOV dword ptr [EAX + 0x136c],EDX    ; 00447898
    MOV EDX,dword ptr [0x01cc511c]      ; 0044789e | DAT_01cc511c
    MOV dword ptr [EAX + 0x138c],EDX    ; 004478a4
    MOV EDX,dword ptr [0x01cc5120]      ; 004478aa | DAT_01cc5120
    MOV dword ptr [EAX + 0x13ac],EDX    ; 004478b0
    MOV EDX,dword ptr [0x01cc5124]      ; 004478b6 | DAT_01cc5124
    MOV dword ptr [EAX + 0x13cc],EDX    ; 004478bc
    MOV EDX,dword ptr [0x01cc5128]      ; 004478c2 | DAT_01cc5128
    MOV dword ptr [EAX + 0x13ec],EDX    ; 004478c8
    MOV EDX,dword ptr [0x01cc512c]      ; 004478ce | DAT_01cc512c
    MOV dword ptr [EAX + 0x140c],EDX    ; 004478d4
    MOV EDX,dword ptr [0x01cc5130]      ; 004478da | DAT_01cc5130
    MOV dword ptr [EAX + 0x142c],EDX    ; 004478e0
    MOV EDX,dword ptr [0x01cc5134]      ; 004478e6 | DAT_01cc5134
    MOV dword ptr [EAX + 0x144c],EDX    ; 004478ec
    MOV EDX,dword ptr [0x01cc5138]      ; 004478f2 | DAT_01cc5138
    MOV dword ptr [EAX + 0x146c],EDX    ; 004478f8
    ADD ESP,0xc                         ; 004478fe
    POP EDI                             ; 00447901
    POP ESI                             ; 00447902
    RET                                 ; 00447903

