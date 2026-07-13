; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * FUN_004b11b0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_0040db50 at 0040dc78
;   FUN_0048ab60 at 0048ad6f
;
; Referenced Globals:
;   void* switchdataD_004b1170 = 004b11c1
;   undefined4 DAT_005852b3
;   undefined4 DAT_005852b6
;   undefined4 DAT_005852b9
;   undefined4 DAT_005852bc
;   undefined4 DAT_005852bf
;   undefined4 DAT_005852c2
;   undefined4 DAT_005852c5
;   undefined4 DAT_005852c8
;   undefined4 DAT_005852cb
;   undefined4 DAT_005852ce
;   undefined4 DAT_005852d1
;   undefined4 DAT_005852d4
;   undefined4 DAT_005852d7
;   undefined4 DAT_005852da
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b11b0
        ;   Label: FUN_004b11b0
    DEC EAX                             ; 004b11b4
    CMP EAX,0xc                         ; 004b11b5
    JA 0x004b120f                       ; 004b11b8
        ;   XREF to: 004b120f (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4b1170]  ; 004b11ba | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EAX,0x5852b3                    ; 004b11c1 | DAT_005852b3
        ;   Label: caseD_1
    RET                                 ; 004b11c6
    MOV EAX,0x5852b6                    ; 004b11c7 | DAT_005852b6
        ;   Label: caseD_2
    RET                                 ; 004b11cc
    MOV EAX,0x5852b9                    ; 004b11cd | DAT_005852b9
        ;   Label: caseD_3
    RET                                 ; 004b11d2
    MOV EAX,0x5852bc                    ; 004b11d3 | DAT_005852bc
        ;   Label: caseD_4
    RET                                 ; 004b11d8
    MOV EAX,0x5852bf                    ; 004b11d9 | DAT_005852bf
        ;   Label: caseD_5
    RET                                 ; 004b11de
    MOV EAX,0x5852c2                    ; 004b11df | DAT_005852c2
        ;   Label: caseD_6
    RET                                 ; 004b11e4
    MOV EAX,0x5852c5                    ; 004b11e5 | DAT_005852c5
        ;   Label: caseD_7
    RET                                 ; 004b11ea
    MOV EAX,0x5852c8                    ; 004b11eb | DAT_005852c8
        ;   Label: caseD_8
    RET                                 ; 004b11f0
    MOV EAX,0x5852cb                    ; 004b11f1 | DAT_005852cb
        ;   Label: caseD_9
    RET                                 ; 004b11f6
    MOV EAX,0x5852ce                    ; 004b11f7 | DAT_005852ce
        ;   Label: caseD_a
    RET                                 ; 004b11fc
    MOV EAX,0x5852d1                    ; 004b11fd | DAT_005852d1
        ;   Label: caseD_b
    RET                                 ; 004b1202
    MOV EAX,0x5852d4                    ; 004b1203 | DAT_005852d4
        ;   Label: caseD_c
    RET                                 ; 004b1208
    MOV EAX,0x5852d7                    ; 004b1209 | DAT_005852d7
        ;   Label: caseD_d
    RET                                 ; 004b120e
    MOV EAX,0x5852da                    ; 004b120f | DAT_005852da
        ;   Label: default
    RET                                 ; 004b1214

