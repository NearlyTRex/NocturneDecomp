; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00481870(undefined4 param_1,char *param_2,char *param_3)
;
; Local Variables:
; undefined1       Stack[-0x844]:1  local_844
; undefined        Stack[-0x744]:1  local_744
; undefined4       Stack[-0x640]:4  local_640
; undefined4       Stack[-0x638]:4  local_638
; undefined        Stack[-0x528]:1  local_528
; undefined4       Stack[-0x424]:4  local_424
; undefined4       Stack[-0x420]:4  local_420
; undefined        Stack[-0x414]:1  local_414
; undefined        Stack[-0x310]:1  local_310
; undefined1       Stack[-0x30f]:1  local_30f
; undefined        Stack[-0x210]:1  local_210
; undefined        Stack[-0x20f]:1  local_20f
; undefined        Stack[-0x110]:1  local_110
;
; XREF[1]:
;   FUN_0047c970 at 0047c9a1
;
; Referenced Globals:
;   TerminatedCString s_s_s_005d2858
;   undefined4 DAT_0061b40c
;
; Called Functions:
;   FUN_00460e10
;   FUN_00460e30
;   FUN_00460e50
;   FUN_00460ed0
;   FUN_00460f50
;   FUN_00461070
;   FUN_004610a0
;   FUN_00481620
;   FUN_0051b580
;   FUN_0051b5d0
;   FUN_005b7790
;   FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481870
        ;   Label: FUN_00481870
    PUSH ESI                            ; 00481871
    PUSH EDI                            ; 00481872
    PUSH EBP                            ; 00481873
    SUB ESP,0x834                       ; 00481874
    MOV EBX,dword ptr [ESP + 0x848]     ; 0048187a
    MOV ESI,dword ptr [ESP + 0x84c]     ; 00481881
    MOV EDI,dword ptr [ESP + 0x850]     ; 00481888
    TEST ESI,ESI                        ; 0048188f
    JZ 0x00481a3d                       ; 00481891
        ;   XREF to: 00481a3d (CONDITIONAL_JUMP)  ; LAB_00481a3d
    CMP byte ptr [ESI],0x0              ; 00481897
    JZ 0x00481a3d                       ; 0048189a
        ;   XREF to: 00481a3d (CONDITIONAL_JUMP)  ; LAB_00481a3d
    PUSH EDI                            ; 004818a0
    PUSH ESI                            ; 004818a1
    PUSH 0x5d2858                       ; 004818a2 | = "%s\\%s"
    LEA ECX,[ESP + 0x540]               ; 004818a7
    PUSH ECX                            ; 004818ae
    CALL FUN_005b7790                   ; 004818af
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x10                        ; 004818b4
    MOV EDX,dword ptr [0x0061b40c]      ; 004818b7 | DAT_0061b40c
        ;   Label: LAB_004818b7
    TEST EDX,EDX                        ; 004818bd
    JZ 0x004819a1                       ; 004818bf
        ;   XREF to: 004819a1 (CONDITIONAL_JUMP)  ; LAB_004819a1
    MOV ECX,ESP                         ; 004818c5
    PUSH ECX                            ; 004818c7
    LEA ECX,[ESP + 0x538]               ; 004818c8
    PUSH ECX                            ; 004818cf
    PUSH EDX                            ; 004818d0
    CALL FUN_0051b580                   ; 004818d1
        ;   XREF to: 0051b580 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b580()
    ADD ESP,0xc                         ; 004818d6
    CMP byte ptr [ESP],0x0              ; 004818d9
    JZ 0x004819a1                       ; 004818dd
        ;   XREF to: 004819a1 (CONDITIONAL_JUMP)  ; LAB_004819a1
    LEA ECX,[ESP + 0x634]               ; 004818e3
        ;   Label: LAB_004818e3
    PUSH ECX                            ; 004818ea
    LEA ECX,[ESP + 0x738]               ; 004818eb
    PUSH ECX                            ; 004818f2
    PUSH 0x0                            ; 004818f3
    PUSH 0x0                            ; 004818f5
    LEA ECX,[ESP + 0x10]                ; 004818f7
    PUSH ECX                            ; 004818fb
    CALL FUN_00461070                   ; 004818fc
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; undefined FUN_00461070()
    ADD ESP,0x14                        ; 00481901
    CMP byte ptr [ESP + 0x634],0x2e     ; 00481904
    JNZ 0x00481938                      ; 0048190c
        ;   XREF to: 00481938 (CONDITIONAL_JUMP)  ; LAB_00481938
    LEA EDI,[ESP + 0x634]               ; 0048190e
    SUB ECX,ECX                         ; 00481915
    DEC ECX                             ; 00481917
    XOR EAX,EAX                         ; 00481918
    SCASB.REPNE ES:EDI                  ; 0048191a
    NOT ECX                             ; 0048191c
    DEC ECX                             ; 0048191e
    PUSH ECX                            ; 0048191f
    LEA ECX,[ESP + 0x639]               ; 00481920
    PUSH ECX                            ; 00481927
    LEA ECX,[ESP + 0x63c]               ; 00481928
    PUSH ECX                            ; 0048192f
    CALL FUN_005ba1f0                   ; 00481930
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba1f0()
    ADD ESP,0xc                         ; 00481935
    LEA ECX,[ESP + 0x634]               ; 00481938
        ;   Label: LAB_00481938
    PUSH ECX                            ; 0048193f
    LEA ECX,[ESP + 0x738]               ; 00481940
    PUSH ECX                            ; 00481947
    PUSH 0x0                            ; 00481948
    PUSH 0x0                            ; 0048194a
    LEA ECX,[ESP + 0x440]               ; 0048194c
    PUSH ECX                            ; 00481953
    CALL FUN_004610a0                   ; 00481954
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004610a0()
    ADD ESP,0x14                        ; 00481959
    MOV ESI,dword ptr [ESP + 0x20c]     ; 0048195c
    PUSH ESI                            ; 00481963
    MOV EDI,dword ptr [ESP + 0x208]     ; 00481964
    PUSH EDI                            ; 0048196b
    LEA ECX,[ESP + 0x108]               ; 0048196c
    PUSH ECX                            ; 00481973
    LEA ECX,[ESP + 0x43c]               ; 00481974
    PUSH ECX                            ; 0048197b
    PUSH EBX                            ; 0048197c
    CALL FUN_00481620                   ; 0048197d
        ;   XREF to: 00481620 (UNCONDITIONAL_CALL)  ; undefined FUN_00481620()
    ADD ESP,0x14                        ; 00481982
    MOV ECX,ESP                         ; 00481985
    PUSH ECX                            ; 00481987
    MOV EBP,dword ptr [0x0061b40c]      ; 00481988 | DAT_0061b40c
    PUSH EBP                            ; 0048198e
    CALL FUN_0051b5d0                   ; 0048198f
        ;   XREF to: 0051b5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b5d0()
    ADD ESP,0x8                         ; 00481994
    CMP byte ptr [ESP],0x0              ; 00481997
    JNZ 0x004818e3                      ; 0048199b
        ;   XREF to: 004818e3 (CONDITIONAL_JUMP)  ; LAB_004818e3
    LEA ECX,[ESP + 0x31c]               ; 004819a1
        ;   Label: LAB_004819a1
    PUSH ECX                            ; 004819a8
    CALL FUN_00460e10                   ; 004819a9
        ;   XREF to: 00460e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00460e10()
    ADD ESP,0x4                         ; 004819ae
    LEA ECX,[ESP + 0x534]               ; 004819b1
    PUSH ECX                            ; 004819b8
    LEA ECX,[ESP + 0x320]               ; 004819b9
    PUSH ECX                            ; 004819c0
    CALL FUN_00460e50                   ; 004819c1
        ;   XREF to: 00460e50 (UNCONDITIONAL_CALL)  ; undefined FUN_00460e50()
    ADD ESP,0x8                         ; 004819c6
    CMP byte ptr [ESP + 0x31c],0x0      ; 004819c9
    JZ 0x00481a10                       ; 004819d1
        ;   XREF to: 00481a10 (CONDITIONAL_JUMP)  ; LAB_00481a10
    MOV EAX,dword ptr [ESP + 0x424]     ; 004819d3
        ;   Label: LAB_004819d3
    PUSH EAX                            ; 004819da
    MOV EDX,dword ptr [ESP + 0x424]     ; 004819db
    PUSH EDX                            ; 004819e2
    PUSH 0x0                            ; 004819e3
    LEA ECX,[ESP + 0x328]               ; 004819e5
    PUSH ECX                            ; 004819ec
    PUSH EBX                            ; 004819ed
    CALL FUN_00481620                   ; 004819ee
        ;   XREF to: 00481620 (UNCONDITIONAL_CALL)  ; undefined FUN_00481620()
    ADD ESP,0x14                        ; 004819f3
    LEA ECX,[ESP + 0x31c]               ; 004819f6
    PUSH ECX                            ; 004819fd
    CALL FUN_00460ed0                   ; 004819fe
        ;   XREF to: 00460ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00460ed0()
    ADD ESP,0x4                         ; 00481a03
    CMP byte ptr [ESP + 0x31c],0x0      ; 00481a06
    JNZ 0x004819d3                      ; 00481a0e
        ;   XREF to: 004819d3 (CONDITIONAL_JUMP)  ; LAB_004819d3
    LEA ECX,[ESP + 0x31c]               ; 00481a10
        ;   Label: LAB_00481a10
    PUSH ECX                            ; 00481a17
    CALL FUN_00460f50                   ; 00481a18
        ;   XREF to: 00460f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00460f50()
    ADD ESP,0x4                         ; 00481a1d
    PUSH 0x0                            ; 00481a20
    LEA ECX,[ESP + 0x320]               ; 00481a22
    PUSH ECX                            ; 00481a29
    CALL FUN_00460e30                   ; 00481a2a
        ;   XREF to: 00460e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00460e30()
    ADD ESP,0x8                         ; 00481a2f
    ADD ESP,0x834                       ; 00481a32
    POP EBP                             ; 00481a38
    POP EDI                             ; 00481a39
    POP ESI                             ; 00481a3a
    POP EBX                             ; 00481a3b
    RET                                 ; 00481a3c
    MOV ESI,EDI                         ; 00481a3d
        ;   Label: LAB_00481a3d
    LEA EDI,[ESP + 0x534]               ; 00481a3f
    PUSH EDI                            ; 00481a46
    MOV AL,byte ptr [ESI]               ; 00481a47
        ;   Label: LAB_00481a47
    MOV byte ptr [EDI],AL               ; 00481a49
    CMP AL,0x0                          ; 00481a4b
    JZ 0x00481a5f                       ; 00481a4d
        ;   XREF to: 00481a5f (CONDITIONAL_JUMP)  ; LAB_00481a5f
    MOV AL,byte ptr [ESI + 0x1]         ; 00481a4f
    ADD ESI,0x2                         ; 00481a52
    MOV byte ptr [EDI + 0x1],AL         ; 00481a55
    ADD EDI,0x2                         ; 00481a58
    CMP AL,0x0                          ; 00481a5b
    JNZ 0x00481a47                      ; 00481a5d
        ;   XREF to: 00481a47 (CONDITIONAL_JUMP)  ; LAB_00481a47
    POP EDI                             ; 00481a5f
        ;   Label: LAB_00481a5f
    JMP 0x004818b7                      ; 00481a60
        ;   XREF to: 004818b7 (UNCONDITIONAL_JUMP)  ; LAB_004818b7

