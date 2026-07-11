; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040f130(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[1]:
;   FUN_00535900 at 00536099
;
; Referenced Globals:
;   string s_Open_pct_:_%f_0057835e
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_0077ad0c
;
; Called Functions:
;   FUN_0043ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f130
        ;   Label: FUN_0040f130
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f131
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040f135
    FLD float ptr [ESP + 0xc]           ; 0040f139
    MOV dword ptr [EBX + 0x314],EAX     ; 0040f13d
    SUB ESP,0x8                         ; 0040f143
    FSTP double ptr [ESP]               ; 0040f146
    PUSH 0x57835e                       ; 0040f149 | = "Open pct : %f\n"
    MOV EDX,dword ptr [0x005ad350]      ; 0040f14e | PTR_DAT_005ad350
    PUSH EDX                            ; 0040f154 | DAT_0077ad0c
    CALL FUN_0043ac60                   ; 0040f155
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined FUN_0043ac60()
    MOV ECX,dword ptr [EBX + 0x340]     ; 0040f15a
    ADD ESP,0x10                        ; 0040f160
    TEST ECX,ECX                        ; 0040f163
    JNZ 0x0040f17b                      ; 0040f165
        ;   XREF to: 0040f17b (CONDITIONAL_JUMP)  ; LAB_0040f17b
    MOV AH,byte ptr [EBX + 0x320]       ; 0040f167
    MOV dword ptr [EBX + 0x340],0x1     ; 0040f16d
    TEST AH,AH                          ; 0040f177
    JNZ 0x0040f17d                      ; 0040f179
        ;   XREF to: 0040f17d (CONDITIONAL_JUMP)  ; LAB_0040f17d
    POP EBX                             ; 0040f17b
        ;   Label: LAB_0040f17b
    RET                                 ; 0040f17c
    LEA EDX,[EBX + 0x320]               ; 0040f17d
        ;   Label: LAB_0040f17d
    PUSH EDX                            ; 0040f183
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0040f184
    PUSH EBX                            ; 0040f18a
    CALL dword ptr [EAX + 0x24]         ; 0040f18b
    ADD ESP,0x8                         ; 0040f18e
    POP EBX                             ; 0040f191
    RET                                 ; 0040f192

