; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_004737a0(undefined4 param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_edittool.cpp_FUN_004739e0 at 00473a46
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004737a0
        ;   Label: shape_edittool.cpp_FUN_004737a0
    PUSH ESI                            ; 004737a1
    PUSH EDI                            ; 004737a2
    PUSH EBP                            ; 004737a3
    SUB ESP,0x4                         ; 004737a4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004737a7
    TEST EBX,EBX                        ; 004737ab
    JL 0x004737c3                       ; 004737ad
        ;   XREF to: 004737c3 (CONDITIONAL_JUMP)  ; LAB_004737c3
    MOV EDX,dword ptr [ESP + 0x20]      ; 004737af
    TEST EDX,EDX                        ; 004737b3
    JL 0x004737c3                       ; 004737b5
        ;   XREF to: 004737c3 (CONDITIONAL_JUMP)  ; LAB_004737c3
    CMP EBX,dword ptr [0x005b761c]      ; 004737b7 | DAT_005b761c
    JL 0x0047384d                       ; 004737bd
        ;   XREF to: 0047384d (CONDITIONAL_JUMP)  ; LAB_0047384d
    MOV ESI,dword ptr [ESP + 0x24]      ; 004737c3
        ;   Label: LAB_004737c3
    MOV EDI,dword ptr [ESP + 0x20]      ; 004737c7
    NEG ESI                             ; 004737cb
    ADD EDI,ESI                         ; 004737cd
    LEA EBP,[ESI + EBX*0x1]             ; 004737cf
    MOV ESI,dword ptr [ESP + 0x24]      ; 004737d2
    MOV EAX,dword ptr [ESP + 0x20]      ; 004737d6
    ADD ESI,EBX                         ; 004737da
    MOV EBX,dword ptr [ESP + 0x24]      ; 004737dc
    MOV dword ptr [ESP],EAX             ; 004737e0
    ADD EBX,EAX                         ; 004737e3
    CMP EBX,dword ptr [ESP]             ; 004737e5
        ;   Label: LAB_004737e5
    JLE 0x00472396                      ; 004737e8
        ;   XREF to: 00472396 (CONDITIONAL_JUMP)  ; LAB_00472396
    TEST EBP,EBP                        ; 004737ee
    JL 0x00473802                       ; 004737f0
        ;   XREF to: 00473802 (CONDITIONAL_JUMP)  ; LAB_00473802
    TEST EDI,EDI                        ; 004737f2
    JL 0x00473802                       ; 004737f4
        ;   XREF to: 00473802 (CONDITIONAL_JUMP)  ; LAB_00473802
    CMP EBP,dword ptr [0x005b761c]      ; 004737f6 | DAT_005b761c
    JL 0x0047389c                       ; 004737fc
        ;   XREF to: 0047389c (CONDITIONAL_JUMP)  ; LAB_0047389c
    TEST ESI,ESI                        ; 00473802
        ;   Label: LAB_00473802
    JL 0x00473816                       ; 00473804
        ;   XREF to: 00473816 (CONDITIONAL_JUMP)  ; LAB_00473816
    TEST EDI,EDI                        ; 00473806
    JL 0x00473816                       ; 00473808
        ;   XREF to: 00473816 (CONDITIONAL_JUMP)  ; LAB_00473816
    CMP ESI,dword ptr [0x005b761c]      ; 0047380a | DAT_005b761c
    JL 0x004738e7                       ; 00473810
        ;   XREF to: 004738e7 (CONDITIONAL_JUMP)  ; LAB_004738e7
    TEST EBP,EBP                        ; 00473816
        ;   Label: LAB_00473816
    JL 0x0047382a                       ; 00473818
        ;   XREF to: 0047382a (CONDITIONAL_JUMP)  ; LAB_0047382a
    TEST EBX,EBX                        ; 0047381a
    JL 0x0047382a                       ; 0047381c
        ;   XREF to: 0047382a (CONDITIONAL_JUMP)  ; LAB_0047382a
    CMP EBP,dword ptr [0x005b761c]      ; 0047381e | DAT_005b761c
    JL 0x00473932                       ; 00473824
        ;   XREF to: 00473932 (CONDITIONAL_JUMP)  ; LAB_00473932
    TEST ESI,ESI                        ; 0047382a
        ;   Label: LAB_0047382a
    JL 0x0047383e                       ; 0047382c
        ;   XREF to: 0047383e (CONDITIONAL_JUMP)  ; LAB_0047383e
    TEST EBX,EBX                        ; 0047382e
    JL 0x0047383e                       ; 00473830
        ;   XREF to: 0047383e (CONDITIONAL_JUMP)  ; LAB_0047383e
    CMP ESI,dword ptr [0x005b761c]      ; 00473832 | DAT_005b761c
    JL 0x0047397d                       ; 00473838
        ;   XREF to: 0047397d (CONDITIONAL_JUMP)  ; LAB_0047397d
    MOV ECX,dword ptr [ESP + 0x24]      ; 0047383e
        ;   Label: LAB_0047383e
    INC EBP                             ; 00473842
    DEC ESI                             ; 00473843
    DEC EBX                             ; 00473844
    DEC ECX                             ; 00473845
    INC EDI                             ; 00473846
    MOV dword ptr [ESP + 0x24],ECX      ; 00473847
    JMP 0x004737e5                      ; 0047384b
        ;   XREF to: 004737e5 (UNCONDITIONAL_JUMP)  ; LAB_004737e5
    CMP EDX,dword ptr [0x005b7620]      ; 0047384d | DAT_005b7620
        ;   Label: LAB_0047384d
    JGE 0x004737c3                      ; 00473853
        ;   XREF to: 004737c3 (CONDITIONAL_JUMP)  ; LAB_004737c3
    CMP EBX,dword ptr [0x01c00c58]      ; 00473859 | DAT_01c00c58
    JL 0x004737c3                       ; 0047385f
        ;   XREF to: 004737c3 (CONDITIONAL_JUMP)  ; LAB_004737c3
    CMP EBX,dword ptr [0x01c00c60]      ; 00473865 | DAT_01c00c60
    JGE 0x004737c3                      ; 0047386b
        ;   XREF to: 004737c3 (CONDITIONAL_JUMP)  ; LAB_004737c3
    MOV EAX,EDX                         ; 00473871
    CMP EAX,dword ptr [0x01c00c5c]      ; 00473873 | DAT_01c00c5c
    JL 0x004737c3                       ; 00473879
        ;   XREF to: 004737c3 (CONDITIONAL_JUMP)  ; LAB_004737c3
    CMP EAX,dword ptr [0x01c00c64]      ; 0047387f | DAT_01c00c64
    JGE 0x004737c3                      ; 00473885
        ;   XREF to: 004737c3 (CONDITIONAL_JUMP)  ; LAB_004737c3
    MOV ESI,EAX                         ; 0047388b
    PUSH ESI                            ; 0047388d
    PUSH EBX                            ; 0047388e
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 0047388f
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_plotPixel_FUN_00401530()
    ADD ESP,0x8                         ; 00473894
    JMP 0x004737c3                      ; 00473897
        ;   XREF to: 004737c3 (UNCONDITIONAL_JUMP)  ; LAB_004737c3
    CMP EDI,dword ptr [0x005b7620]      ; 0047389c | DAT_005b7620
        ;   Label: LAB_0047389c
    JGE 0x00473802                      ; 004738a2
        ;   XREF to: 00473802 (CONDITIONAL_JUMP)  ; LAB_00473802
    CMP EBP,dword ptr [0x01c00c58]      ; 004738a8 | DAT_01c00c58
    JL 0x00473802                       ; 004738ae
        ;   XREF to: 00473802 (CONDITIONAL_JUMP)  ; LAB_00473802
    CMP EBP,dword ptr [0x01c00c60]      ; 004738b4 | DAT_01c00c60
    JGE 0x00473802                      ; 004738ba
        ;   XREF to: 00473802 (CONDITIONAL_JUMP)  ; LAB_00473802
    CMP EDI,dword ptr [0x01c00c5c]      ; 004738c0 | DAT_01c00c5c
    JL 0x00473802                       ; 004738c6
        ;   XREF to: 00473802 (CONDITIONAL_JUMP)  ; LAB_00473802
    CMP EDI,dword ptr [0x01c00c64]      ; 004738cc | DAT_01c00c64
    JGE 0x00473802                      ; 004738d2
        ;   XREF to: 00473802 (CONDITIONAL_JUMP)  ; LAB_00473802
    PUSH EDI                            ; 004738d8
    PUSH EBP                            ; 004738d9
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 004738da
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_plotPixel_FUN_00401530()
    ADD ESP,0x8                         ; 004738df
    JMP 0x00473802                      ; 004738e2
        ;   XREF to: 00473802 (UNCONDITIONAL_JUMP)  ; LAB_00473802
    CMP EDI,dword ptr [0x005b7620]      ; 004738e7 | DAT_005b7620
        ;   Label: LAB_004738e7
    JGE 0x00473816                      ; 004738ed
        ;   XREF to: 00473816 (CONDITIONAL_JUMP)  ; LAB_00473816
    CMP ESI,dword ptr [0x01c00c58]      ; 004738f3 | DAT_01c00c58
    JL 0x00473816                       ; 004738f9
        ;   XREF to: 00473816 (CONDITIONAL_JUMP)  ; LAB_00473816
    CMP ESI,dword ptr [0x01c00c60]      ; 004738ff | DAT_01c00c60
    JGE 0x00473816                      ; 00473905
        ;   XREF to: 00473816 (CONDITIONAL_JUMP)  ; LAB_00473816
    CMP EDI,dword ptr [0x01c00c5c]      ; 0047390b | DAT_01c00c5c
    JL 0x00473816                       ; 00473911
        ;   XREF to: 00473816 (CONDITIONAL_JUMP)  ; LAB_00473816
    CMP EDI,dword ptr [0x01c00c64]      ; 00473917 | DAT_01c00c64
    JGE 0x00473816                      ; 0047391d
        ;   XREF to: 00473816 (CONDITIONAL_JUMP)  ; LAB_00473816
    PUSH EDI                            ; 00473923
    PUSH ESI                            ; 00473924
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 00473925
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_plotPixel_FUN_00401530()
    ADD ESP,0x8                         ; 0047392a
    JMP 0x00473816                      ; 0047392d
        ;   XREF to: 00473816 (UNCONDITIONAL_JUMP)  ; LAB_00473816
    CMP EBX,dword ptr [0x005b7620]      ; 00473932 | DAT_005b7620
        ;   Label: LAB_00473932
    JGE 0x0047382a                      ; 00473938
        ;   XREF to: 0047382a (CONDITIONAL_JUMP)  ; LAB_0047382a
    CMP EBP,dword ptr [0x01c00c58]      ; 0047393e | DAT_01c00c58
    JL 0x0047382a                       ; 00473944
        ;   XREF to: 0047382a (CONDITIONAL_JUMP)  ; LAB_0047382a
    CMP EBP,dword ptr [0x01c00c60]      ; 0047394a | DAT_01c00c60
    JGE 0x0047382a                      ; 00473950
        ;   XREF to: 0047382a (CONDITIONAL_JUMP)  ; LAB_0047382a
    CMP EBX,dword ptr [0x01c00c5c]      ; 00473956 | DAT_01c00c5c
    JL 0x0047382a                       ; 0047395c
        ;   XREF to: 0047382a (CONDITIONAL_JUMP)  ; LAB_0047382a
    CMP EBX,dword ptr [0x01c00c64]      ; 00473962 | DAT_01c00c64
    JGE 0x0047382a                      ; 00473968
        ;   XREF to: 0047382a (CONDITIONAL_JUMP)  ; LAB_0047382a
    PUSH EBX                            ; 0047396e
    PUSH EBP                            ; 0047396f
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 00473970
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_plotPixel_FUN_00401530()
    ADD ESP,0x8                         ; 00473975
    JMP 0x0047382a                      ; 00473978
        ;   XREF to: 0047382a (UNCONDITIONAL_JUMP)  ; LAB_0047382a
    CMP EBX,dword ptr [0x005b7620]      ; 0047397d | DAT_005b7620
        ;   Label: LAB_0047397d
    JGE 0x0047383e                      ; 00473983
        ;   XREF to: 0047383e (CONDITIONAL_JUMP)  ; LAB_0047383e
    CMP ESI,dword ptr [0x01c00c58]      ; 00473989 | DAT_01c00c58
    JL 0x0047383e                       ; 0047398f
        ;   XREF to: 0047383e (CONDITIONAL_JUMP)  ; LAB_0047383e
    CMP ESI,dword ptr [0x01c00c60]      ; 00473995 | DAT_01c00c60
    JGE 0x0047383e                      ; 0047399b
        ;   XREF to: 0047383e (CONDITIONAL_JUMP)  ; LAB_0047383e
    CMP EBX,dword ptr [0x01c00c5c]      ; 004739a1 | DAT_01c00c5c
    JL 0x0047383e                       ; 004739a7
        ;   XREF to: 0047383e (CONDITIONAL_JUMP)  ; LAB_0047383e
    CMP EBX,dword ptr [0x01c00c64]      ; 004739ad | DAT_01c00c64
    JGE 0x0047383e                      ; 004739b3
        ;   XREF to: 0047383e (CONDITIONAL_JUMP)  ; LAB_0047383e
    PUSH EBX                            ; 004739b9
    PUSH ESI                            ; 004739ba
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 004739bb
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_plotPixel_FUN_00401530()
    ADD ESP,0x8                         ; 004739c0
    MOV ECX,dword ptr [ESP + 0x24]      ; 004739c3
    INC EBP                             ; 004739c7
    DEC ESI                             ; 004739c8
    DEC EBX                             ; 004739c9
    DEC ECX                             ; 004739ca
    INC EDI                             ; 004739cb
    MOV dword ptr [ESP + 0x24],ECX      ; 004739cc
    JMP 0x004737e5                      ; 004739d0
        ;   XREF to: 004737e5 (UNCONDITIONAL_JUMP)  ; LAB_004737e5

