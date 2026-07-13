; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ba8a0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   FUN_004b9fe0 at 004ba4a9
;
; Referenced Globals:
;   undefined4 DAT_005861b2
;   undefined4 DAT_005be368
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;   undefined4 DAT_02dd1008
;
; Called Functions:
;   FUN_0040a240
;   FUN_0040d890
;   FUN_004e16b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ba8a0
        ;   Label: FUN_004ba8a0
    PUSH ESI                            ; 004ba8a1
    PUSH EDI                            ; 004ba8a2
    PUSH EBP                            ; 004ba8a3
    MOV EBP,ESP                         ; 004ba8a4
    SUB ESP,0x2c                        ; 004ba8a6
    AND ESP,0xfffffff8                  ; 004ba8a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ba8ac
    MOV EDX,0x40800000                  ; 004ba8af
    MOV ECX,0x3f800000                  ; 004ba8b4
    MOV ESI,0x40000000                  ; 004ba8b9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004ba8be
    MOV dword ptr [EAX + 0x1fa60],0x0   ; 004ba8c1
    LEA EAX,[ESP + 0x18]                ; 004ba8cb
    XOR EBX,EBX                         ; 004ba8cf
    PUSH EAX                            ; 004ba8d1
    LEA EAX,[ESP + 0x10]                ; 004ba8d2
    MOV dword ptr [ESP + 0x28],EDX      ; 004ba8d6
    PUSH EAX                            ; 004ba8da
    MOV dword ptr [ESP + 0x20],ECX      ; 004ba8db
    MOV dword ptr [ESP + 0x24],EBX      ; 004ba8df
    PUSH EDI                            ; 004ba8e3
    MOV dword ptr [ESP + 0x2c],ESI      ; 004ba8e4
    XOR ESI,ESI                         ; 004ba8e8
    CALL FUN_0040a240                   ; 004ba8ea
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    ADD ESP,0xc                         ; 004ba8ef
    XOR EDI,EDI                         ; 004ba8f2
    MOV EAX,[0x005be368]                ; 004ba8f4 | DAT_005be368
        ;   Label: LAB_004ba8f4
    CMP ESI,dword ptr [EAX + 0x14cd6c]  ; 004ba8f9 | DAT_01fa3ff0
    JL 0x004ba91b                       ; 004ba8ff
        ;   XREF to: 004ba91b (CONDITIONAL_JUMP)  ; LAB_004ba91b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ba901
    MOV ECX,dword ptr [EAX + 0x1fa60]   ; 004ba904
    TEST ECX,ECX                        ; 004ba90a
    JNZ 0x004ba9b0                      ; 004ba90c
        ;   XREF to: 004ba9b0 (CONDITIONAL_JUMP)  ; LAB_004ba9b0
    XOR EAX,EAX                         ; 004ba912
    MOV ESP,EBP                         ; 004ba914
    POP EBP                             ; 004ba916
    POP EDI                             ; 004ba917
    POP ESI                             ; 004ba918
    POP EBX                             ; 004ba919
    RET                                 ; 004ba91a
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14cd70] ; 004ba91b | DAT_01fa3ff4
        ;   Label: LAB_004ba91b
    PUSH EBX                            ; 004ba922
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004ba923
    CALL dword ptr [EAX + 0x8c]         ; 004ba929
    ADD ESP,0x4                         ; 004ba92f
    TEST EAX,EAX                        ; 004ba932
    JNZ 0x004ba9a7                      ; 004ba934
        ;   XREF to: 004ba9a7 (CONDITIONAL_JUMP)  ; LAB_004ba9a7
    MOV EAX,[0x02dd1008]                ; 004ba936 | DAT_02dd1008
    PUSH EAX                            ; 004ba93b
    PUSH EBX                            ; 004ba93c
    CALL FUN_0040d890                   ; 004ba93d
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    ADD ESP,0x8                         ; 004ba942
    TEST EAX,EAX                        ; 004ba945
    JZ 0x004ba9a7                       ; 004ba947
        ;   XREF to: 004ba9a7 (CONDITIONAL_JUMP)  ; LAB_004ba9a7
    LEA EAX,[EBX + 0x20]                ; 004ba949
    FLD float ptr [EAX]                 ; 004ba94c
    FSUB float ptr [ESP + 0xc]          ; 004ba94e
    FSTP float ptr [ESP]                ; 004ba952
    FLD float ptr [EAX + 0x4]           ; 004ba955
    FSUB float ptr [ESP + 0x10]         ; 004ba958
    FST float ptr [ESP + 0x4]           ; 004ba95c
    FLD float ptr [EAX + 0x8]           ; 004ba960
    FXCH                                ; 004ba963
    FABS                                ; 004ba965
    FXCH                                ; 004ba967
    FSUB float ptr [ESP + 0x14]         ; 004ba969
    FSTP float ptr [ESP + 0x8]          ; 004ba96d
    FCOMP double ptr [0x005861b2]       ; 004ba971 | DAT_005861b2
    FNSTSW AX                           ; 004ba977
    SAHF                                ; 004ba979
    JA 0x004ba9a7                       ; 004ba97a
        ;   XREF to: 004ba9a7 (CONDITIONAL_JUMP)  ; LAB_004ba9a7
    FLD float ptr [ESP + 0x8]           ; 004ba97c
    FMUL ST0                            ; 004ba980
    FLD float ptr [ESP]                 ; 004ba982
    FMUL ST0                            ; 004ba985
    FADDP                               ; 004ba987
    FST float ptr [ESP + 0x28]          ; 004ba989
    FCOMP float ptr [ESP + 0x24]        ; 004ba98d
    FNSTSW AX                           ; 004ba991
    SAHF                                ; 004ba993
    JA 0x004ba9a7                       ; 004ba994
        ;   XREF to: 004ba9a7 (CONDITIONAL_JUMP)  ; LAB_004ba9a7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ba996
    MOV dword ptr [EAX + 0x1fa60],EBX   ; 004ba999
    MOV EAX,dword ptr [ESP + 0x28]      ; 004ba99f
    MOV dword ptr [ESP + 0x24],EAX      ; 004ba9a3
    INC ESI                             ; 004ba9a7
        ;   Label: LAB_004ba9a7
    ADD EDI,0x4                         ; 004ba9a8
    JMP 0x004ba8f4                      ; 004ba9ab
        ;   XREF to: 004ba8f4 (UNCONDITIONAL_JUMP)  ; LAB_004ba8f4
    FLD float ptr [ECX + 0x20]          ; 004ba9b0
        ;   Label: LAB_004ba9b0
    FSUB float ptr [ESP + 0xc]          ; 004ba9b3
    FADD float ptr [EAX + 0x20]         ; 004ba9b7
    FSTP float ptr [EAX + 0x20]         ; 004ba9ba
    MOV EAX,dword ptr [EAX + 0x1fa60]   ; 004ba9bd
    FLD float ptr [EAX + 0x28]          ; 004ba9c3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ba9c6
    PUSH 0x1                            ; 004ba9c9
    ADD EAX,0x150                       ; 004ba9cb
    FSUB float ptr [ESP + 0x18]         ; 004ba9d0
    PUSH 0x13                           ; 004ba9d4
    FADD float ptr [EAX + 0xfffffed8]   ; 004ba9d6
    PUSH EAX                            ; 004ba9dc
    FSTP float ptr [EAX + 0xfffffed8]   ; 004ba9dd
    CALL FUN_004e16b0                   ; 004ba9e3
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    MOV EAX,0x1                         ; 004ba9e8
    ADD ESP,0xc                         ; 004ba9ed
    MOV ESP,EBP                         ; 004ba9f0
    POP EBP                             ; 004ba9f2
    POP EDI                             ; 004ba9f3
    POP ESI                             ; 004ba9f4
    POP EBX                             ; 004ba9f5
    RET                                 ; 004ba9f6

