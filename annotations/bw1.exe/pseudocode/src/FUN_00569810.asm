; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00569810(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5)
;
;
; XREF[11]:
;   FUN_004101f0 at 00410370
;   FUN_00413970 at 00413b01
;   FUN_0042e960 at 0042e9de
;   FUN_0042fe00 at 0042ffc0
;   FUN_0047cfe0 at 0047d180
;   FUN_00510620 at 00510738
;   FUN_00510910 at 00510983
;   FUN_0055fc60 at 0055fd51
;   FUN_005611a0 at 0056127f
;   FUN_00592aa0 at 00592b3a
;   ... and 1 more
;
; Called Functions:
;   FUN_00566380
;   FUN_00569920
;   FUN_00569970
;   FUN_005699c0
;   FUN_00569a10
;   FUN_00569eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569810
        ;   Label: FUN_00569810
    PUSH ESI                            ; 00569811
    PUSH EDI                            ; 00569812
    MOV EBX,dword ptr [ESP + 0x10]      ; 00569813
    MOV EAX,dword ptr [ESP + 0x14]      ; 00569817
    MOV ESI,EAX                         ; 0056981b
    TEST EAX,EAX                        ; 0056981d
    JL 0x00569857                       ; 0056981f
        ;   XREF to: 00569857 (CONDITIONAL_JUMP)  ; LAB_00569857
    PUSH ESI                            ; 00569821
        ;   Label: LAB_00569821
    PUSH EBX                            ; 00569822
    CALL FUN_00569920                   ; 00569823
        ;   XREF to: 00569920 (UNCONDITIONAL_CALL)  ; undefined FUN_00569920()
    ADD ESP,0x8                         ; 00569828
    CMP dword ptr [ESP + 0x1c],0x0      ; 0056982b
    JNZ 0x00569874                      ; 00569830
        ;   XREF to: 00569874 (CONDITIONAL_JUMP)  ; LAB_00569874
    CMP dword ptr [ESP + 0x18],0x0      ; 00569832
    JL 0x00569880                       ; 00569837
        ;   XREF to: 00569880 (CONDITIONAL_JUMP)  ; LAB_00569880
    TEST byte ptr [ESP + 0x19],0x1      ; 00569839
    JZ 0x00569880                       ; 0056983e
        ;   XREF to: 00569880 (CONDITIONAL_JUMP)  ; LAB_00569880
    MOV ESI,dword ptr [ESP + 0x20]      ; 00569840
        ;   Label: LAB_00569840
    PUSH ESI                            ; 00569844
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00569845
    PUSH EDI                            ; 00569849
    PUSH EBX                            ; 0056984a
    CALL FUN_00569a10                   ; 0056984b
        ;   XREF to: 00569a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00569a10()
    ADD ESP,0xc                         ; 00569850
    POP EDI                             ; 00569853
    POP ESI                             ; 00569854
    POP EBX                             ; 00569855
    RET                                 ; 00569856
    LEA EAX,[EBX + 0x2328]              ; 00569857
        ;   Label: LAB_00569857
    PUSH EAX                            ; 0056985d
    PUSH EBX                            ; 0056985e
    CALL FUN_00569eb0                   ; 0056985f
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    ADD ESP,0x4                         ; 00569864
    PUSH EAX                            ; 00569867
    CALL FUN_00566380                   ; 00569868
        ;   XREF to: 00566380 (UNCONDITIONAL_CALL)  ; undefined FUN_00566380()
    ADD ESP,0x8                         ; 0056986d
    MOV ESI,EAX                         ; 00569870
    JMP 0x00569821                      ; 00569872
        ;   XREF to: 00569821 (UNCONDITIONAL_JUMP)  ; LAB_00569821
    PUSH ESI                            ; 00569874
        ;   Label: LAB_00569874
    PUSH EBX                            ; 00569875
    CALL FUN_00569970                   ; 00569876
        ;   XREF to: 00569970 (UNCONDITIONAL_CALL)  ; undefined FUN_00569970()
    ADD ESP,0x8                         ; 0056987b
    JMP 0x00569840                      ; 0056987e
        ;   XREF to: 00569840 (UNCONDITIONAL_JUMP)  ; LAB_00569840
    PUSH ESI                            ; 00569880
        ;   Label: LAB_00569880
    PUSH EBX                            ; 00569881
    CALL FUN_005699c0                   ; 00569882
        ;   XREF to: 005699c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005699c0()
    ADD ESP,0x8                         ; 00569887
    JMP 0x00569840                      ; 0056988a
        ;   XREF to: 00569840 (UNCONDITIONAL_JUMP)  ; LAB_00569840

