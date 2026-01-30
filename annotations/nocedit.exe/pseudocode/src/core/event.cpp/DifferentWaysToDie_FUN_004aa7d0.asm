; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_event_cpp_DifferentWaysToDie_FUN_004aa7d0(char *param_1,int *param_2)
;
; Parameters:
; char *           Stack[0x4]:4   param_1
; int *            Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_event.cpp_CEventList_FUN_004aacc0 at 004abe9d
;
; Referenced Globals:
;   TerminatedCString s_generic_0062457a
;   TerminatedCString s_drown_00624582
;   TerminatedCString s_fall_00624588
;   TerminatedCString s_explode_0062458d
;   TerminatedCString s_fallApart_00624595
;   TerminatedCString s_shatter_0062459f
;   TerminatedCString s_electrocute_006245a7
;   TerminatedCString s_gas_006245b3
;   TerminatedCString s_Chopped_006245b7
;   TerminatedCString s_Crushed_006245bf
;   TerminatedCString s_Impale_006245c7
;   TerminatedCString s_Fire_006245ce
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa7d0
        ;   Label: core_event.cpp_DifferentWaysToDie_FUN_004aa7d0
    PUSH ESI                            ; 004aa7d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004aa7d2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004aa7d6
    PUSH 0x62457a                       ; 004aa7da | = "generic"
    PUSH EBX                            ; 004aa7df
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aa7e0
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa7e5
    TEST EAX,EAX                        ; 004aa7e8
    JNZ 0x004aa7f6                      ; 004aa7ea
        ;   XREF to: 004aa7f6 (CONDITIONAL_JUMP)  ; LAB_004aa7f6
    MOV dword ptr [ESI],EAX             ; 004aa7ec
    MOV EAX,0x1                         ; 004aa7ee
    POP ESI                             ; 004aa7f3
    POP EBX                             ; 004aa7f4
    RET                                 ; 004aa7f5
    PUSH 0x624582                       ; 004aa7f6 | = "drown"
        ;   Label: LAB_004aa7f6
    PUSH EBX                            ; 004aa7fb
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aa7fc
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa801
    TEST EAX,EAX                        ; 004aa804
    JNZ 0x004aa816                      ; 004aa806
        ;   XREF to: 004aa816 (CONDITIONAL_JUMP)  ; LAB_004aa816
    MOV dword ptr [ESI],0x1             ; 004aa808
    MOV EAX,0x1                         ; 004aa80e
    POP ESI                             ; 004aa813
    POP EBX                             ; 004aa814
    RET                                 ; 004aa815
    PUSH 0x624588                       ; 004aa816 | = "fall"
        ;   Label: LAB_004aa816
    PUSH EBX                            ; 004aa81b
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aa81c
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa821
    TEST EAX,EAX                        ; 004aa824
    JNZ 0x004aa836                      ; 004aa826
        ;   XREF to: 004aa836 (CONDITIONAL_JUMP)  ; LAB_004aa836
    MOV dword ptr [ESI],0x2             ; 004aa828
    MOV EAX,0x1                         ; 004aa82e
    POP ESI                             ; 004aa833
    POP EBX                             ; 004aa834
    RET                                 ; 004aa835
    PUSH 0x62458d                       ; 004aa836 | = "explode"
        ;   Label: LAB_004aa836
    PUSH EBX                            ; 004aa83b
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aa83c
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa841
    TEST EAX,EAX                        ; 004aa844
    JNZ 0x004aa856                      ; 004aa846
        ;   XREF to: 004aa856 (CONDITIONAL_JUMP)  ; LAB_004aa856
    MOV dword ptr [ESI],0x3             ; 004aa848
    MOV EAX,0x1                         ; 004aa84e
    POP ESI                             ; 004aa853
    POP EBX                             ; 004aa854
    RET                                 ; 004aa855
    PUSH 0x624595                       ; 004aa856 | = "fallApart"
        ;   Label: LAB_004aa856
    PUSH EBX                            ; 004aa85b
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aa85c
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa861
    TEST EAX,EAX                        ; 004aa864
    JNZ 0x004aa876                      ; 004aa866
        ;   XREF to: 004aa876 (CONDITIONAL_JUMP)  ; LAB_004aa876
    MOV dword ptr [ESI],0x4             ; 004aa868
    MOV EAX,0x1                         ; 004aa86e
    POP ESI                             ; 004aa873
    POP EBX                             ; 004aa874
    RET                                 ; 004aa875
    PUSH 0x62459f                       ; 004aa876 | = "shatter"
        ;   Label: LAB_004aa876
    PUSH EBX                            ; 004aa87b
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aa87c
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa881
    TEST EAX,EAX                        ; 004aa884
    JNZ 0x004aa896                      ; 004aa886
        ;   XREF to: 004aa896 (CONDITIONAL_JUMP)  ; LAB_004aa896
    MOV dword ptr [ESI],0x5             ; 004aa888
    MOV EAX,0x1                         ; 004aa88e
    POP ESI                             ; 004aa893
    POP EBX                             ; 004aa894
    RET                                 ; 004aa895
    PUSH 0x6245a7                       ; 004aa896 | = "electrocute"
        ;   Label: LAB_004aa896
    PUSH EBX                            ; 004aa89b
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aa89c
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa8a1
    TEST EAX,EAX                        ; 004aa8a4
    JNZ 0x004aa8b6                      ; 004aa8a6
        ;   XREF to: 004aa8b6 (CONDITIONAL_JUMP)  ; LAB_004aa8b6
    MOV dword ptr [ESI],0x6             ; 004aa8a8
    MOV EAX,0x1                         ; 004aa8ae
    POP ESI                             ; 004aa8b3
    POP EBX                             ; 004aa8b4
    RET                                 ; 004aa8b5
    PUSH 0x6245b3                       ; 004aa8b6 | = "gas"
        ;   Label: LAB_004aa8b6
    PUSH EBX                            ; 004aa8bb
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aa8bc
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa8c1
    TEST EAX,EAX                        ; 004aa8c4
    JNZ 0x004aa8d6                      ; 004aa8c6
        ;   XREF to: 004aa8d6 (CONDITIONAL_JUMP)  ; LAB_004aa8d6
    MOV dword ptr [ESI],0x69            ; 004aa8c8
    MOV EAX,0x1                         ; 004aa8ce
    POP ESI                             ; 004aa8d3
    POP EBX                             ; 004aa8d4
    RET                                 ; 004aa8d5
    PUSH 0x6245b7                       ; 004aa8d6 | = "Chopped"
        ;   Label: LAB_004aa8d6
    PUSH EBX                            ; 004aa8db
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aa8dc
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa8e1
    TEST EAX,EAX                        ; 004aa8e4
    JNZ 0x004aa8f6                      ; 004aa8e6
        ;   XREF to: 004aa8f6 (CONDITIONAL_JUMP)  ; LAB_004aa8f6
    MOV dword ptr [ESI],0x7             ; 004aa8e8
    MOV EAX,0x1                         ; 004aa8ee
    POP ESI                             ; 004aa8f3
    POP EBX                             ; 004aa8f4
    RET                                 ; 004aa8f5
    PUSH 0x6245bf                       ; 004aa8f6 | = "Crushed"
        ;   Label: LAB_004aa8f6
    PUSH EBX                            ; 004aa8fb
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aa8fc
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa901
    TEST EAX,EAX                        ; 004aa904
    JNZ 0x004aa916                      ; 004aa906
        ;   XREF to: 004aa916 (CONDITIONAL_JUMP)  ; LAB_004aa916
    MOV dword ptr [ESI],0x8             ; 004aa908
    MOV EAX,0x1                         ; 004aa90e
    POP ESI                             ; 004aa913
    POP EBX                             ; 004aa914
    RET                                 ; 004aa915
    PUSH 0x6245c7                       ; 004aa916 | = "Impale"
        ;   Label: LAB_004aa916
    PUSH EBX                            ; 004aa91b
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aa91c
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa921
    TEST EAX,EAX                        ; 004aa924
    JNZ 0x004aa936                      ; 004aa926
        ;   XREF to: 004aa936 (CONDITIONAL_JUMP)  ; LAB_004aa936
    MOV dword ptr [ESI],0x9             ; 004aa928
    MOV EAX,0x1                         ; 004aa92e
    POP ESI                             ; 004aa933
    POP EBX                             ; 004aa934
    RET                                 ; 004aa935
    PUSH 0x6245ce                       ; 004aa936 | = "Fire"
        ;   Label: LAB_004aa936
    PUSH EBX                            ; 004aa93b
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aa93c
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa941
    TEST EAX,EAX                        ; 004aa944
    JNZ 0x004aa956                      ; 004aa946
        ;   XREF to: 004aa956 (CONDITIONAL_JUMP)  ; LAB_004aa956
    MOV dword ptr [ESI],0xa             ; 004aa948
    MOV EAX,0x1                         ; 004aa94e
    POP ESI                             ; 004aa953
    POP EBX                             ; 004aa954
    RET                                 ; 004aa955
    XOR EAX,EAX                         ; 004aa956
        ;   Label: LAB_004aa956
    POP ESI                             ; 004aa958
    POP EBX                             ; 004aa959
    RET                                 ; 004aa95a

