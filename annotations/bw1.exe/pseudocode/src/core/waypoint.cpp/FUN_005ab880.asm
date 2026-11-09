; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_waypoint_cpp_FUN_005ab880(float *param_1,CLocation *param_2,int param_3,int param_4)
;
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_waypoint.cpp_FUN_005abb80 at 005abba5
;
; Referenced Globals:
;   undefined4 DAT_005f93fb
;   undefined4 DAT_005f9403
;   undefined4 DAT_005f940b
;   undefined4 DAT_005f9413
;
; Called Functions:
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0
;   core_path.cpp_getPathMap_FUN_005351f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab880
        ;   Label: core_waypoint.cpp_FUN_005ab880
    PUSH ESI                            ; 005ab881
    PUSH EDI                            ; 005ab882
    PUSH EBP                            ; 005ab883
    MOV EBP,ESP                         ; 005ab884
    SUB ESP,0x30                        ; 005ab886
    AND ESP,0xfffffff8                  ; 005ab889
    MOV EDX,dword ptr [EBP + 0x14]      ; 005ab88c
    MOV ECX,dword ptr [EBP + 0x18]      ; 005ab88f
    FLD float ptr [EDX]                 ; 005ab892
    FLD float ptr [EDX + 0x4]           ; 005ab894
    FLD float ptr [EDX + 0x8]           ; 005ab897
    LEA EDI,[ESP + 0x24]                ; 005ab89a
    LEA ESI,[ESP + 0x18]                ; 005ab89e
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005ab8a2
    FXCH ST2                            ; 005ab8a5
    FSUB float ptr [ECX]                ; 005ab8a7
    FXCH                                ; 005ab8a9
    FSUB float ptr [ECX + 0x4]          ; 005ab8ab
    FXCH ST2                            ; 005ab8ae
    FSUB float ptr [ECX + 0x8]          ; 005ab8b0
    FXCH ST2                            ; 005ab8b3
    FSTP float ptr [ESP + 0x1c]         ; 005ab8b5
    FXCH                                ; 005ab8b9
    FSTP float ptr [ESP + 0x20]         ; 005ab8bb
    FSTP float ptr [ESP + 0x18]         ; 005ab8bf
    MOVSD ES:EDI,ESI                    ; 005ab8c3
    MOVSD ES:EDI,ESI                    ; 005ab8c4
    MOVSD ES:EDI,ESI                    ; 005ab8c5
    TEST EBX,EBX                        ; 005ab8c6
    JZ 0x005ab913                       ; 005ab8c8
        ;   XREF to: 005ab913 (CONDITIONAL_JUMP)  ; LAB_005ab913
    FLD float ptr [ESP + 0x28]          ; 005ab8ca
    FABS                                ; 005ab8ce
    FCOMP double ptr [0x005f940b]       ; 005ab8d0 | DAT_005f940b
    FNSTSW AX                           ; 005ab8d6
    SAHF                                ; 005ab8d8
    JA 0x005ab90f                       ; 005ab8d9
        ;   XREF to: 005ab90f (CONDITIONAL_JUMP)  ; LAB_005ab90f
    FLD float ptr [ESP + 0x24]          ; 005ab8db
    FABS                                ; 005ab8df
    FCOMP double ptr [0x005f9413]       ; 005ab8e1 | DAT_005f9413
    FNSTSW AX                           ; 005ab8e7
    SAHF                                ; 005ab8e9
    JA 0x005ab90f                       ; 005ab8ea
        ;   XREF to: 005ab90f (CONDITIONAL_JUMP)  ; LAB_005ab90f
    FLD float ptr [ESP + 0x2c]          ; 005ab8ec
    FABS                                ; 005ab8f0
    FCOMP double ptr [0x005f9413]       ; 005ab8f2 | DAT_005f9413
    FNSTSW AX                           ; 005ab8f8
    SAHF                                ; 005ab8fa
    JA 0x005ab90f                       ; 005ab8fb
        ;   XREF to: 005ab90f (CONDITIONAL_JUMP)  ; LAB_005ab90f
    CMP dword ptr [EBP + 0x20],0x0      ; 005ab8fd
        ;   Label: LAB_005ab8fd
    JZ 0x005ab94a                       ; 005ab901
        ;   XREF to: 005ab94a (CONDITIONAL_JUMP)  ; LAB_005ab94a
    MOV EAX,0x1                         ; 005ab903
    MOV ESP,EBP                         ; 005ab908
        ;   Label: LAB_005ab908
    POP EBP                             ; 005ab90a
    POP EDI                             ; 005ab90b
    POP ESI                             ; 005ab90c
    POP EBX                             ; 005ab90d
    RET                                 ; 005ab90e
    XOR EAX,EAX                         ; 005ab90f
        ;   Label: LAB_005ab90f
    JMP 0x005ab908                      ; 005ab911
        ;   XREF to: 005ab908 (UNCONDITIONAL_JUMP)  ; LAB_005ab908
    FLD float ptr [ESP + 0x28]          ; 005ab913
        ;   Label: LAB_005ab913
    FABS                                ; 005ab917
    FCOMP double ptr [0x005f93fb]       ; 005ab919 | DAT_005f93fb
    FNSTSW AX                           ; 005ab91f
    SAHF                                ; 005ab921
    JA 0x005ab946                       ; 005ab922
        ;   XREF to: 005ab946 (CONDITIONAL_JUMP)  ; LAB_005ab946
    FLD float ptr [ESP + 0x24]          ; 005ab924
    FABS                                ; 005ab928
    FCOMP double ptr [0x005f9403]       ; 005ab92a | DAT_005f9403
    FNSTSW AX                           ; 005ab930
    SAHF                                ; 005ab932
    JA 0x005ab946                       ; 005ab933
        ;   XREF to: 005ab946 (CONDITIONAL_JUMP)  ; LAB_005ab946
    FLD float ptr [ESP + 0x2c]          ; 005ab935
    FABS                                ; 005ab939
    FCOMP double ptr [0x005f9403]       ; 005ab93b | DAT_005f9403
    FNSTSW AX                           ; 005ab941
    SAHF                                ; 005ab943
    JBE 0x005ab8fd                      ; 005ab944
        ;   XREF to: 005ab8fd (CONDITIONAL_JUMP)  ; LAB_005ab8fd
    XOR EAX,EAX                         ; 005ab946
        ;   Label: LAB_005ab946
    JMP 0x005ab908                      ; 005ab948
        ;   XREF to: 005ab908 (UNCONDITIONAL_JUMP)  ; LAB_005ab908
    MOV EDI,ESP                         ; 005ab94a
        ;   Label: LAB_005ab94a
    MOV ESI,EDX                         ; 005ab94c
    PUSH ECX                            ; 005ab94e
    MOVSD ES:EDI,ESI                    ; 005ab94f
    MOVSD ES:EDI,ESI                    ; 005ab950
    MOVSD ES:EDI,ESI                    ; 005ab951
    CALL core_path.cpp_getPathMap_FUN_005351f0 ; 005ab952
        ;   XREF to: 005351f0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_005351f0(CLocation * location)
    ADD ESP,0x4                         ; 005ab957
    PUSH 0x0                            ; 005ab95a
    LEA EDX,[ESP + 0x10]                ; 005ab95c
    PUSH EDX                            ; 005ab960
    LEA EDX,[ESP + 0x8]                 ; 005ab961
    PUSH EDX                            ; 005ab965
    PUSH EAX                            ; 005ab966
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0 ; 005ab967
        ;   XREF to: 005349a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 005ab96c
    CMP EAX,0x1                         ; 005ab96f
    SETZ AL                             ; 005ab972
    AND EAX,0xff                        ; 005ab975
    MOV ESP,EBP                         ; 005ab97a
    POP EBP                             ; 005ab97c
    POP EDI                             ; 005ab97d
    POP ESI                             ; 005ab97e
    POP EBX                             ; 005ab97f
    RET                                 ; 005ab980

