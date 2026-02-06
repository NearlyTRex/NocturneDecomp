; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_frankgen_cpp_CFrankenstienMachine_initializeInEditor_FUN_004d2770 (CFrankenstienMachine *this_ptr)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x3ac]:1  local_3ac
;
; Referenced Globals:
;   TerminatedCString s_Bed_0062ac28
;   TerminatedCString s_Crane1_0062ac2c
;   TerminatedCString s_Crane2_0062ac33
;   TerminatedCString s_Crane3_0062ac3a
;   TerminatedCString s_Stitcher_0062ac41
;   TerminatedCString s_Arm_0062ac4a
;   TerminatedCString s_Flap1_0062ac4e
;   TerminatedCString s_Flap2_0062ac54
;   TerminatedCString s_Create_which_part_0062ac5a
;
; Called Functions:
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2770
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_initializeInEditor_FUN_004d2770
    SUB ESP,0x3a8                       ; 004d2771
    MOV EBX,dword ptr [ESP + 0x3b0]     ; 004d2777
    MOV EAX,ESP                         ; 004d277e
    PUSH EAX                            ; 004d2780
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004d2781
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004d2786
    PUSH 0x62ac28                       ; 004d2789 | = "Bed"
    LEA EAX,[ESP + 0x4]                 ; 004d278e
    PUSH EAX                            ; 004d2792
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004d2793
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004d2798
    PUSH 0x62ac2c                       ; 004d279b | = "Crane1"
    LEA EAX,[ESP + 0x4]                 ; 004d27a0
    PUSH EAX                            ; 004d27a4
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004d27a5
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004d27aa
    PUSH 0x62ac33                       ; 004d27ad | = "Crane2"
    LEA EAX,[ESP + 0x4]                 ; 004d27b2
    PUSH EAX                            ; 004d27b6
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004d27b7
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004d27bc
    PUSH 0x62ac3a                       ; 004d27bf | = "Crane3"
    LEA EAX,[ESP + 0x4]                 ; 004d27c4
    PUSH EAX                            ; 004d27c8
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004d27c9
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004d27ce
    PUSH 0x62ac41                       ; 004d27d1 | = "Stitcher"
    LEA EAX,[ESP + 0x4]                 ; 004d27d6
    PUSH EAX                            ; 004d27da
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004d27db
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004d27e0
    PUSH 0x62ac4a                       ; 004d27e3 | = "Arm"
    LEA EAX,[ESP + 0x4]                 ; 004d27e8
    PUSH EAX                            ; 004d27ec
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004d27ed
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004d27f2
    PUSH 0x62ac4e                       ; 004d27f5 | = "Flap1"
    LEA EAX,[ESP + 0x4]                 ; 004d27fa
    PUSH EAX                            ; 004d27fe
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004d27ff
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004d2804
    PUSH 0x62ac54                       ; 004d2807 | = "Flap2"
    LEA EAX,[ESP + 0x4]                 ; 004d280c
    PUSH EAX                            ; 004d2810
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004d2811
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004d2816
    PUSH 0x0                            ; 004d2819
    PUSH -0x1                           ; 004d281b
    PUSH 0x62ac5a                       ; 004d281d | = "Create which part?"
    LEA EAX,[ESP + 0xc]                 ; 004d2822
    PUSH EAX                            ; 004d2826
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004d2827
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 004d282c
    MOV dword ptr [EBX + 0x158],EAX     ; 004d282f
    TEST EAX,EAX                        ; 004d2835
    JL 0x004d2857                       ; 004d2837
        ;   XREF to: 004d2857 (CONDITIONAL_JUMP)  ; LAB_004d2857
    PUSH 0x0                            ; 004d2839
    LEA EAX,[ESP + 0x4]                 ; 004d283b
    PUSH EAX                            ; 004d283f
    MOV EBX,0x1                         ; 004d2840
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004d2845
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d284a
    MOV EAX,EBX                         ; 004d284d
    ADD ESP,0x3a8                       ; 004d284f
    POP EBX                             ; 004d2855
    RET                                 ; 004d2856
    XOR EBX,EBX                         ; 004d2857
        ;   Label: LAB_004d2857
    PUSH EBX                            ; 004d2859
    LEA EAX,[ESP + 0x4]                 ; 004d285a
    PUSH EAX                            ; 004d285e
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004d285f
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d2864
    MOV EAX,EBX                         ; 004d2867
    ADD ESP,0x3a8                       ; 004d2869
    POP EBX                             ; 004d286f
    RET                                 ; 004d2870

