; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004cff90(int param_1,int param_2)
;
;
; XREF[5]:
;   core_doc.cpp_FUN_00453250 at 00453625
;   core_gabriela.cpp_FUN_004af410 at 004af58e
;   core_stranger.cpp_FUN_005656f0 at 005659df
;   core_stranger.cpp_FUN_0056db50 at 0056dd0e
;   unkafter_stranger.cpp_FUN_0045bdc0 at 0045c018
;
; Referenced Globals:
;   undefined4 s_s_63Ravinammo01_005d9d83+1
;   TerminatedCString s_searchedravine_005d9d92
;   TerminatedCString s_s_63Ravinammo02_005d9da1
;   TerminatedCString s_searchedravine_005d9daf
;   TerminatedCString s_s_63Ravinfood01_005d9dbe
;   TerminatedCString s_searchedravine_005d9dcc
;   undefined4 DAT_006141f0
;
; Called Functions:
;   core_event.cpp_FUN_00490f80
;   core_inv.cpp_FUN_004dadb0
;   crt_string.c__strcmp_FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cff90
        ;   Label: core_hero.cpp_FUN_004cff90
    PUSH ESI                            ; 004cff91
    MOV ESI,dword ptr [ESP + 0xc]       ; 004cff92
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cff96
    SHL EAX,0x3                         ; 004cff9a
    MOV EBX,EAX                         ; 004cff9d
    SHL EAX,0x4                         ; 004cff9f
    SUB EAX,EBX                         ; 004cffa2
    LEA EBX,[ESI + EAX*0x1]             ; 004cffa4
    MOV EBX,dword ptr [EBX + 0x2620]    ; 004cffa7
    TEST EBX,EBX                        ; 004cffad
    JZ 0x004d0032                       ; 004cffaf
        ;   XREF to: 004d0032 (CONDITIONAL_JUMP)  ; LAB_004d0032
    JZ 0x004d0005                       ; 004cffb5
        ;   XREF to: 004d0005 (CONDITIONAL_JUMP)  ; LAB_004d0005
    PUSH 0x5d9d84                       ; 004cffb7 | s_s_63Ravinammo01_005d9d83+1
    PUSH EBX                            ; 004cffbc
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 004cffbd
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 004cffc2
    TEST EAX,EAX                        ; 004cffc5
    JZ 0x004d0035                       ; 004cffc7
        ;   XREF to: 004d0035 (CONDITIONAL_JUMP)  ; LAB_004d0035
    PUSH 0x5d9da1                       ; 004cffc9 | = "63Ravinammo02"
        ;   Label: LAB_004cffc9
    PUSH EBX                            ; 004cffce
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 004cffcf
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 004cffd4
    TEST EAX,EAX                        ; 004cffd7
    JZ 0x004d0050                       ; 004cffd9
        ;   XREF to: 004d0050 (CONDITIONAL_JUMP)  ; LAB_004d0050
    PUSH 0x5d9dbe                       ; 004cffdb | = "63Ravinfood01"
        ;   Label: LAB_004cffdb
    PUSH EBX                            ; 004cffe0
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 004cffe1
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 004cffe6
    TEST EAX,EAX                        ; 004cffe9
    JNZ 0x004d0005                      ; 004cffeb
        ;   XREF to: 004d0005 (CONDITIONAL_JUMP)  ; LAB_004d0005
    PUSH EDI                            ; 004cffed
    PUSH 0x1                            ; 004cffee
    PUSH 0x5d9dcc                       ; 004cfff0 | = "searchedravine"
    MOV EDI,dword ptr [0x006141f0]      ; 004cfff5 | DAT_006141f0
    PUSH EDI                            ; 004cfffb
    CALL core_event.cpp_FUN_00490f80    ; 004cfffc
        ;   XREF to: 00490f80 (UNCONDITIONAL_CALL)  ; void core_event.cpp_FUN_00490f80(CEventList * this_ptr, char * name, int add_flag)
    ADD ESP,0xc                         ; 004d0001
    POP EDI                             ; 004d0004
    PUSH 0x0                            ; 004d0005
        ;   Label: LAB_004d0005
    PUSH 0x1                            ; 004d0007
    PUSH EBX                            ; 004d0009
    LEA EAX,[ESI + 0x2437c]             ; 004d000a
    PUSH EAX                            ; 004d0010
    CALL core_inv.cpp_FUN_004dadb0      ; 004d0011
        ;   XREF to: 004dadb0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dadb0()
    ADD ESP,0x10                        ; 004d0016
    MOV EAX,dword ptr [ESP + 0x10]      ; 004d0019
    SHL EAX,0x3                         ; 004d001d
    MOV EBX,EAX                         ; 004d0020
    SHL EAX,0x4                         ; 004d0022
    SUB EAX,EBX                         ; 004d0025
    MOV dword ptr [ESI + EAX*0x1 + 0x2620],0x0 ; 004d0027
    POP ESI                             ; 004d0032
        ;   Label: LAB_004d0032
    POP EBX                             ; 004d0033
    RET                                 ; 004d0034
    PUSH 0x1                            ; 004d0035
        ;   Label: LAB_004d0035
    PUSH 0x5d9d92                       ; 004d0037 | = "searchedravine"
    MOV EDX,dword ptr [0x006141f0]      ; 004d003c | DAT_006141f0
    PUSH EDX                            ; 004d0042
    CALL core_event.cpp_FUN_00490f80    ; 004d0043
        ;   XREF to: 00490f80 (UNCONDITIONAL_CALL)  ; void core_event.cpp_FUN_00490f80(CEventList * this_ptr, char * name, int add_flag)
    ADD ESP,0xc                         ; 004d0048
    JMP 0x004cffc9                      ; 004d004b
        ;   XREF to: 004cffc9 (UNCONDITIONAL_JUMP)  ; LAB_004cffc9
    PUSH 0x1                            ; 004d0050
        ;   Label: LAB_004d0050
    PUSH 0x5d9daf                       ; 004d0052 | = "searchedravine"
    MOV ECX,dword ptr [0x006141f0]      ; 004d0057 | DAT_006141f0
    PUSH ECX                            ; 004d005d
    CALL core_event.cpp_FUN_00490f80    ; 004d005e
        ;   XREF to: 00490f80 (UNCONDITIONAL_CALL)  ; void core_event.cpp_FUN_00490f80(CEventList * this_ptr, char * name, int add_flag)
    ADD ESP,0xc                         ; 004d0063
    JMP 0x004cffdb                      ; 004d0066
        ;   XREF to: 004cffdb (UNCONDITIONAL_JUMP)  ; LAB_004cffdb

