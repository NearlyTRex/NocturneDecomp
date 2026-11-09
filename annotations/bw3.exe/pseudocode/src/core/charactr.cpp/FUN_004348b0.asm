; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_charactr_cpp_FUN_004348b0(int param_1,char *param_2)
;
; Local Variables:
; undefined4       Stack[-0x1f64]:4  local_1f64
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_charactr.cpp_FUN_004333e0 at 00433472
;   core_shadow.cpp_FUN_005438d0 at 00543f3c
;
; Referenced Globals:
;   undefined4 DAT_005b892a
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CDemonSetInstance.field1396340_0x154e74
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_charactr.cpp_FUN_004349d0
;   shape_edittool.cpp_wildcardStringMatch_FUN_00486a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004348b0
        ;   Label: core_charactr.cpp_FUN_004348b0
    PUSH ESI                            ; 004348b1
    PUSH EDI                            ; 004348b2
    PUSH EBP                            ; 004348b3
    SUB ESP,0x1f54                      ; 004348b4
    MOV ESI,dword ptr [ESP + 0x1f68]    ; 004348ba
    XOR EDX,EDX                         ; 004348c1
    XOR EDI,EDI                         ; 004348c3
    XOR EBP,EBP                         ; 004348c5
    MOV dword ptr [ESP + 0x1f48],EDX    ; 004348c7
    MOV dword ptr [ESP + 0x1f4c],EDX    ; 004348ce
    ADD ESI,0x20                        ; 004348d5
    MOV EAX,[0x00603b28]                ; 004348d8 | g_CDemonSetPtr
        ;   Label: LAB_004348d8
    MOV EBX,dword ptr [ESP + 0x1f4c]    ; 004348dd
    CMP EBX,dword ptr [EAX + 0x154e74]  ; 004348e4 | g_CDemonSetInstance.field1396340_0x154e74
    JL 0x0043492d                       ; 004348ea
        ;   XREF to: 0043492d (CONDITIONAL_JUMP)  ; LAB_0043492d
    MOV ECX,dword ptr [ESP + 0x1f48]    ; 004348ec
    TEST ECX,ECX                        ; 004348f3
    JLE 0x00434920                      ; 004348f5
        ;   XREF to: 00434920 (CONDITIONAL_JUMP)  ; LAB_00434920
    LEA EDI,[ECX + -0x1]                ; 004348f7
    XOR ESI,ESI                         ; 004348fa
    XOR EBP,EBP                         ; 004348fc
    PUSH EDI                            ; 004348fe
        ;   Label: LAB_004348fe
    PUSH EBP                            ; 004348ff
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00434900
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    LEA EBX,[EAX*0x4 + 0x0]             ; 00434905
    ADD ESP,0x8                         ; 0043490c
    MOV EAX,dword ptr [ESP + EBX*0x1]   ; 0043490f
    CMP EBP,EAX                         ; 00434912
    JNZ 0x004349a4                      ; 00434914
        ;   XREF to: 004349a4 (CONDITIONAL_JUMP)  ; LAB_004349a4
    INC ESI                             ; 0043491a
        ;   Label: LAB_0043491a
    CMP ESI,0xa                         ; 0043491b
    JL 0x004348fe                       ; 0043491e
        ;   XREF to: 004348fe (CONDITIONAL_JUMP)  ; LAB_004348fe
    XOR EAX,EAX                         ; 00434920
        ;   Label: LAB_00434920
    ADD ESP,0x1f54                      ; 00434922
        ;   Label: LAB_00434922
    POP EBP                             ; 00434928
    POP EDI                             ; 00434929
    POP ESI                             ; 0043492a
    POP EBX                             ; 0043492b
    RET                                 ; 0043492c
    PUSH 0x0                            ; 0043492d
        ;   Label: LAB_0043492d
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x154e78] ; 0043492f
    PUSH EBX                            ; 00434936
    MOV EAX,dword ptr [ESP + 0x1f74]    ; 00434937
    PUSH EAX                            ; 0043493e
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_00486a40 ; 0043493f
        ;   XREF to: 00486a40 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_00486a40(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 00434944
    TEST EAX,EAX                        ; 00434947
    JZ 0x0043498d                       ; 00434949
        ;   XREF to: 0043498d (CONDITIONAL_JUMP)  ; LAB_0043498d
    LEA EAX,[EBX + 0x20]                ; 0043494b
    FLD float ptr [ESI]                 ; 0043494e
    FSUB float ptr [EAX]                ; 00434950
    FMUL ST0                            ; 00434952
    FLD float ptr [ESI + 0x4]           ; 00434954
    FSUB float ptr [EAX + 0x4]          ; 00434957
    FMUL ST0                            ; 0043495a
    FLD float ptr [ESI + 0x8]           ; 0043495c
    FXCH                                ; 0043495f
    FADDP ST2,ST0                       ; 00434961
    FSUB float ptr [EAX + 0x8]          ; 00434963
    FMUL ST0                            ; 00434966
    FADDP                               ; 00434968
    FSQRT                               ; 0043496a
    FCOMP float ptr [0x005b892a]        ; 0043496c | DAT_005b892a
    FNSTSW AX                           ; 00434972
    SAHF                                ; 00434974
    JA 0x0043498d                       ; 00434975
        ;   XREF to: 0043498d (CONDITIONAL_JUMP)  ; LAB_0043498d
    MOV EDX,dword ptr [ESP + 0x1f48]    ; 00434977
    ADD EBP,0x4                         ; 0043497e
    INC EDX                             ; 00434981
    MOV dword ptr [ESP + EBP*0x1 + -0x4],EBX ; 00434982
    MOV dword ptr [ESP + 0x1f48],EDX    ; 00434986
    MOV ECX,dword ptr [ESP + 0x1f4c]    ; 0043498d
        ;   Label: LAB_0043498d
    INC ECX                             ; 00434994
    ADD EDI,0x4                         ; 00434995
    MOV dword ptr [ESP + 0x1f4c],ECX    ; 00434998
    JMP 0x004348d8                      ; 0043499f
        ;   XREF to: 004348d8 (UNCONDITIONAL_JUMP)  ; LAB_004348d8
    PUSH EAX                            ; 004349a4
        ;   Label: LAB_004349a4
    MOV ECX,dword ptr [ESP + 0x1f6c]    ; 004349a5
    PUSH ECX                            ; 004349ac
    CALL core_charactr.cpp_FUN_004349d0 ; 004349ad
        ;   XREF to: 004349d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004349d0()
    ADD ESP,0x8                         ; 004349b2
    TEST EAX,EAX                        ; 004349b5
    JNZ 0x00434922                      ; 004349b7
        ;   XREF to: 00434922 (CONDITIONAL_JUMP)  ; LAB_00434922
    MOV dword ptr [ESP + EBX*0x1],EBP   ; 004349bd
    JMP 0x0043491a                      ; 004349c0
        ;   XREF to: 0043491a (UNCONDITIONAL_JUMP)  ; LAB_0043491a

