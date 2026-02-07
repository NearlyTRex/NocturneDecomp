; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_modelExportWizard_FUN_0045a7b0(int export_format_type)
;
; Parameters:
; int              Stack[0x4]:4   export_format_type
; Local Variables:
; undefined1       Stack[-0x6c]:1  local_6c
; undefined1       Stack[-0x6b]:1  local_6b
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_handleEditorHotkeys_FUN_0045b990 at 0045ba4b
;
; Referenced Globals:
;   TerminatedCString s_Binary_filename_to_write_0061af3e
;   TerminatedCString s_ASM_0061af5a
;   undefined4 DAT_0061af5b
;   undefined4 DAT_0061af5c
;   undefined4 DAT_0061af5d
;   TerminatedCString s_BIN_0061af5f
;   undefined4 DAT_0061af60
;   undefined4 DAT_0061af61
;   undefined4 DAT_0061af62
;   TerminatedCString s_N_No_reset_depth_0061af64
;   TerminatedCString s_T_Transparent_0061af76
;   TerminatedCString s_Y_Reset_depth_0061af85
;   TerminatedCString s_X_No_sort_0061af94
;   TerminatedCString s_Z_Perspective_reset_dept_0061af9f
;   TerminatedCString s_R_Z_buffered_Tree_0061afca
;   ... and 9 more
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   shape_design.c_exportModelToBIN_FUN_0045aa80
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045a7b0
        ;   Label: shape_design.c_modelExportWizard_FUN_0045a7b0
    PUSH ESI                            ; 0045a7b1
    PUSH EDI                            ; 0045a7b2
    PUSH EBP                            ; 0045a7b3
    MOV EBP,ESP                         ; 0045a7b4
    SUB ESP,0x5c                        ; 0045a7b6
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0045a7bc
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0045a7c1
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV ECX,0x61af3e                    ; 0045a7c6 | = "Binary filename to write : "
    PUSH ECX                            ; 0045a7cb | = "Binary filename to write : "
    PUSH 0x0                            ; 0045a7cc
    PUSH 0x0                            ; 0045a7ce
    PUSH 0x28                           ; 0045a7d0
    LEA ECX,[EBP + -0x5c]               ; 0045a7d2
    PUSH ECX                            ; 0045a7d5
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0045a7d6
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0045a7db
    LEA EDI,[EBP + -0x5c]               ; 0045a7de
    SUB ECX,ECX                         ; 0045a7e1
    DEC ECX                             ; 0045a7e3
    XOR EAX,EAX                         ; 0045a7e4
    SCASB.REPNE ES:EDI                  ; 0045a7e6
    NOT ECX                             ; 0045a7e8
    DEC ECX                             ; 0045a7ea
    TEST ECX,ECX                        ; 0045a7eb
    JNZ 0x0045a7f4                      ; 0045a7ed
        ;   XREF to: 0045a7f4 (CONDITIONAL_JUMP)  ; LAB_0045a7f4
    JMP 0x0045aa74                      ; 0045a7ef
        ;   XREF to: 0045aa74 (UNCONDITIONAL_JUMP)  ; LAB_0045aa74
    MOV EDX,0x2e                        ; 0045a7f4
        ;   Label: LAB_0045a7f4
    LEA ESI,[EBP + -0x5c]               ; 0045a7f9
    MOV AL,byte ptr [ESI]               ; 0045a7fc
        ;   Label: LAB_0045a7fc
    CMP AL,DL                           ; 0045a7fe
    JZ 0x0045a814                       ; 0045a800
        ;   XREF to: 0045a814 (CONDITIONAL_JUMP)  ; LAB_0045a814
    CMP AL,0x0                          ; 0045a802
    JZ 0x0045a812                       ; 0045a804
        ;   XREF to: 0045a812 (CONDITIONAL_JUMP)  ; LAB_0045a812
    INC ESI                             ; 0045a806
    MOV AL,byte ptr [ESI]               ; 0045a807
    CMP AL,DL                           ; 0045a809
    JZ 0x0045a814                       ; 0045a80b
        ;   XREF to: 0045a814 (CONDITIONAL_JUMP)  ; LAB_0045a814
    INC ESI                             ; 0045a80d
    CMP AL,0x0                          ; 0045a80e
    JNZ 0x0045a7fc                      ; 0045a810
        ;   XREF to: 0045a7fc (CONDITIONAL_JUMP)  ; LAB_0045a7fc
    SUB ESI,ESI                         ; 0045a812
        ;   Label: LAB_0045a812
    TEST ESI,ESI                        ; 0045a814
        ;   Label: LAB_0045a814
    JNZ 0x0045a82a                      ; 0045a816
        ;   XREF to: 0045a82a (CONDITIONAL_JUMP)  ; LAB_0045a82a
    LEA EDI,[EBP + -0x5c]               ; 0045a818
    SUB ECX,ECX                         ; 0045a81b
    DEC ECX                             ; 0045a81d
    XOR EAX,EAX                         ; 0045a81e
    SCASB.REPNE ES:EDI                  ; 0045a820
    NOT ECX                             ; 0045a822
    DEC ECX                             ; 0045a824
    CMP ECX,0x8                         ; 0045a825
    JBE 0x0045a82c                      ; 0045a828
        ;   XREF to: 0045a82c (CONDITIONAL_JUMP)  ; LAB_0045a82c
    JMP 0x0045a88e                      ; 0045a82a
        ;   XREF to: 0045a88e (UNCONDITIONAL_JUMP)  ; LAB_0045a88e
        ;   Label: LAB_0045a82a
    CMP dword ptr [EBP + 0x14],0x0      ; 0045a82c
        ;   Label: LAB_0045a82c
    JNZ 0x0045a85e                      ; 0045a830
        ;   XREF to: 0045a85e (CONDITIONAL_JUMP)  ; LAB_0045a85e
    MOV ESI,0x61af5a                    ; 0045a832 | = ".ASM"
    LEA EDI,[EBP + -0x5c]               ; 0045a837
    PUSH EDI                            ; 0045a83a
    SUB ECX,ECX                         ; 0045a83b
    DEC ECX                             ; 0045a83d
    MOV AL,0x0                          ; 0045a83e
    SCASB.REPNE ES:EDI                  ; 0045a840
    DEC EDI                             ; 0045a842
    MOV AL,byte ptr [ESI]               ; 0045a843 | = ".ASM" | DAT_0061af5c
        ;   Label: LAB_0045a843
    MOV byte ptr [EDI],AL               ; 0045a845
    CMP AL,0x0                          ; 0045a847
    JZ 0x0045a85b                       ; 0045a849
        ;   XREF to: 0045a85b (CONDITIONAL_JUMP)  ; LAB_0045a85b
    MOV AL,byte ptr [ESI + 0x1]         ; 0045a84b | DAT_0061af5b | DAT_0061af5d
    ADD ESI,0x2                         ; 0045a84e
    MOV byte ptr [EDI + 0x1],AL         ; 0045a851
    ADD EDI,0x2                         ; 0045a854
    CMP AL,0x0                          ; 0045a857
    JNZ 0x0045a843                      ; 0045a859
        ;   XREF to: 0045a843 (CONDITIONAL_JUMP)  ; LAB_0045a843
    POP EDI                             ; 0045a85b
        ;   Label: LAB_0045a85b
    JMP 0x0045a88e                      ; 0045a85c
        ;   XREF to: 0045a88e (UNCONDITIONAL_JUMP)  ; LAB_0045a88e
    CMP dword ptr [EBP + 0x14],0x1      ; 0045a85e
        ;   Label: LAB_0045a85e
    JNZ 0x0045a88e                      ; 0045a862
        ;   XREF to: 0045a88e (CONDITIONAL_JUMP)  ; LAB_0045a88e
    MOV ESI,0x61af5f                    ; 0045a864 | = ".BIN"
    LEA EDI,[EBP + -0x5c]               ; 0045a869
    PUSH EDI                            ; 0045a86c
    SUB ECX,ECX                         ; 0045a86d
    DEC ECX                             ; 0045a86f
    MOV AL,0x0                          ; 0045a870
    SCASB.REPNE ES:EDI                  ; 0045a872
    DEC EDI                             ; 0045a874
    MOV AL,byte ptr [ESI]               ; 0045a875 | = ".BIN" | DAT_0061af61
        ;   Label: LAB_0045a875
    MOV byte ptr [EDI],AL               ; 0045a877
    CMP AL,0x0                          ; 0045a879
    JZ 0x0045a88d                       ; 0045a87b
        ;   XREF to: 0045a88d (CONDITIONAL_JUMP)  ; LAB_0045a88d
    MOV AL,byte ptr [ESI + 0x1]         ; 0045a87d | DAT_0061af60 | DAT_0061af62
    ADD ESI,0x2                         ; 0045a880
    MOV byte ptr [EDI + 0x1],AL         ; 0045a883
    ADD EDI,0x2                         ; 0045a886
    CMP AL,0x0                          ; 0045a889
    JNZ 0x0045a875                      ; 0045a88b
        ;   XREF to: 0045a875 (CONDITIONAL_JUMP)  ; LAB_0045a875
    POP EDI                             ; 0045a88d
        ;   Label: LAB_0045a88d
    PUSH 0x16                           ; 0045a88e
        ;   Label: LAB_0045a88e
    PUSH 0x0                            ; 0045a890
    MOV EAX,0x61af64                    ; 0045a892 | = "N) No reset depth"
    PUSH EAX                            ; 0045a897 | = "N) No reset depth"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045a898
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045a89d
    PUSH 0x21                           ; 0045a8a0
    PUSH 0x0                            ; 0045a8a2
    MOV EAX,0x61af76                    ; 0045a8a4 | = "T) Transparent"
    PUSH EAX                            ; 0045a8a9 | = "T) Transparent"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045a8aa
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045a8af
    PUSH 0x2c                           ; 0045a8b2
    PUSH 0x0                            ; 0045a8b4
    MOV EAX,0x61af85                    ; 0045a8b6 | = "Y) Reset depth"
    PUSH EAX                            ; 0045a8bb | = "Y) Reset depth"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045a8bc
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045a8c1
    PUSH 0x37                           ; 0045a8c4
    PUSH 0x0                            ; 0045a8c6
    MOV EAX,0x61af94                    ; 0045a8c8 | = "X) No sort"
    PUSH EAX                            ; 0045a8cd | = "X) No sort"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045a8ce
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045a8d3
    PUSH 0x42                           ; 0045a8d6
    PUSH 0x0                            ; 0045a8d8
    MOV EAX,0x61af9f                    ; 0045a8da | = "Z) Perspective reset depth for big ob..."
    PUSH EAX                            ; 0045a8df | = "Z) Perspective reset depth for big ob..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045a8e0
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045a8e5
    PUSH 0x4d                           ; 0045a8e8
    PUSH 0x0                            ; 0045a8ea
    MOV EAX,0x61afca                    ; 0045a8ec | = "R) Z buffered Tree"
    PUSH EAX                            ; 0045a8f1 | = "R) Z buffered Tree"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045a8f2
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045a8f7
    PUSH 0x58                           ; 0045a8fa
    PUSH 0x0                            ; 0045a8fc
    MOV EAX,0x61afdd                    ; 0045a8fe | = "G) Giant (bigger than 255 feet wide) ..."
    PUSH EAX                            ; 0045a903 | = "G) Giant (bigger than 255 feet wide) ..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045a904
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045a909
    PUSH 0x63                           ; 0045a90c
    PUSH 0x0                            ; 0045a90e
    MOV EAX,0x61b009                    ; 0045a910 | = "H) Huge flat track"
    PUSH EAX                            ; 0045a915 | = "H) Huge flat track"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045a916
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045a91b
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045a91e
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0045a923
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    AND EAX,0xff                        ; 0045a928
    PUSH EAX                            ; 0045a92d
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 0045a92e
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 0045a933
    MOV dword ptr [EBP + -0xc],EAX      ; 0045a936
    CMP dword ptr [EBP + -0xc],0x4e     ; 0045a939
    JZ 0x0045a945                       ; 0045a93d
        ;   XREF to: 0045a945 (CONDITIONAL_JUMP)  ; LAB_0045a945
    CMP dword ptr [EBP + -0xc],0x59     ; 0045a93f
    JNZ 0x0045a947                      ; 0045a943
        ;   XREF to: 0045a947 (CONDITIONAL_JUMP)  ; LAB_0045a947
    JMP 0x0045a94d                      ; 0045a945
        ;   XREF to: 0045a94d (UNCONDITIONAL_JUMP)  ; LAB_0045a94d
        ;   Label: LAB_0045a945
    CMP dword ptr [EBP + -0xc],0x58     ; 0045a947
        ;   Label: LAB_0045a947
    JNZ 0x0045a94f                      ; 0045a94b
        ;   XREF to: 0045a94f (CONDITIONAL_JUMP)  ; LAB_0045a94f
    JMP 0x0045a955                      ; 0045a94d
        ;   XREF to: 0045a955 (UNCONDITIONAL_JUMP)  ; LAB_0045a955
        ;   Label: LAB_0045a94d
    CMP dword ptr [EBP + -0xc],0x5a     ; 0045a94f
        ;   Label: LAB_0045a94f
    JNZ 0x0045a957                      ; 0045a953
        ;   XREF to: 0045a957 (CONDITIONAL_JUMP)  ; LAB_0045a957
    JMP 0x0045a95d                      ; 0045a955
        ;   XREF to: 0045a95d (UNCONDITIONAL_JUMP)  ; LAB_0045a95d
        ;   Label: LAB_0045a955
    CMP dword ptr [EBP + -0xc],0x54     ; 0045a957
        ;   Label: LAB_0045a957
    JNZ 0x0045a95f                      ; 0045a95b
        ;   XREF to: 0045a95f (CONDITIONAL_JUMP)  ; LAB_0045a95f
    JMP 0x0045a965                      ; 0045a95d
        ;   XREF to: 0045a965 (UNCONDITIONAL_JUMP)  ; LAB_0045a965
        ;   Label: LAB_0045a95d
    CMP dword ptr [EBP + -0xc],0x52     ; 0045a95f
        ;   Label: LAB_0045a95f
    JNZ 0x0045a967                      ; 0045a963
        ;   XREF to: 0045a967 (CONDITIONAL_JUMP)  ; LAB_0045a967
    JMP 0x0045a96d                      ; 0045a965
        ;   XREF to: 0045a96d (UNCONDITIONAL_JUMP)  ; LAB_0045a96d
        ;   Label: LAB_0045a965
    CMP dword ptr [EBP + -0xc],0x47     ; 0045a967
        ;   Label: LAB_0045a967
    JNZ 0x0045a96f                      ; 0045a96b
        ;   XREF to: 0045a96f (CONDITIONAL_JUMP)  ; LAB_0045a96f
    JMP 0x0045a975                      ; 0045a96d
        ;   XREF to: 0045a975 (UNCONDITIONAL_JUMP)  ; LAB_0045a975
        ;   Label: LAB_0045a96d
    CMP dword ptr [EBP + -0xc],0x48     ; 0045a96f
        ;   Label: LAB_0045a96f
    JNZ 0x0045a977                      ; 0045a973
        ;   XREF to: 0045a977 (CONDITIONAL_JUMP)  ; LAB_0045a977
    JMP 0x0045a97c                      ; 0045a975
        ;   XREF to: 0045a97c (UNCONDITIONAL_JUMP)  ; LAB_0045a97c
        ;   Label: LAB_0045a975
    JMP 0x0045a88e                      ; 0045a977
        ;   XREF to: 0045a88e (UNCONDITIONAL_JUMP)  ; LAB_0045a88e
        ;   Label: LAB_0045a977
    PUSH 0x79                           ; 0045a97c
        ;   Label: LAB_0045a97c
    PUSH 0x0                            ; 0045a97e
    MOV EAX,0x61b01c                    ; 0045a980 | = "1. Scale to fit"
    PUSH EAX                            ; 0045a985 | = "1. Scale to fit"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045a986
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045a98b
    PUSH 0x84                           ; 0045a98e
    PUSH 0x0                            ; 0045a993
    MOV EAX,0x61b02c                    ; 0045a995 | = "2. Normalize X"
    PUSH EAX                            ; 0045a99a | = "2. Normalize X"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045a99b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045a9a0
    PUSH 0x8f                           ; 0045a9a3
    PUSH 0x0                            ; 0045a9a8
    MOV EAX,0x61b03b                    ; 0045a9aa | = "3. Normalize Y"
    PUSH EAX                            ; 0045a9af | = "3. Normalize Y"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045a9b0
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045a9b5
    PUSH 0x9a                           ; 0045a9b8
    PUSH 0x0                            ; 0045a9bd
    MOV EAX,0x61b04a                    ; 0045a9bf | = "4. Normalize Z"
    PUSH EAX                            ; 0045a9c4 | = "4. Normalize Z"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045a9c5
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045a9ca
    PUSH 0xa5                           ; 0045a9cd
    PUSH 0x0                            ; 0045a9d2
    MOV EAX,0x61b059                    ; 0045a9d4 | = "5. Do not scale"
    PUSH EAX                            ; 0045a9d9 | = "5. Do not scale"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045a9da
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045a9df
    PUSH 0xb0                           ; 0045a9e2
    PUSH 0x0                            ; 0045a9e7
    MOV EAX,0x61b069                    ; 0045a9e9 | = "6. Animated model scale"
    PUSH EAX                            ; 0045a9ee | = "6. Animated model scale"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045a9ef
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045a9f4
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045a9f7
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0045a9fc
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    AND EAX,0xff                        ; 0045aa01
    PUSH EAX                            ; 0045aa06
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 0045aa07
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 0045aa0c
    MOV dword ptr [EBP + -0x4],EAX      ; 0045aa0f
    CMP dword ptr [EBP + -0x4],0x31     ; 0045aa12
    JL 0x0045aa1e                       ; 0045aa16
        ;   XREF to: 0045aa1e (CONDITIONAL_JUMP)  ; LAB_0045aa1e
    CMP dword ptr [EBP + -0x4],0x36     ; 0045aa18
    JLE 0x0045aa23                      ; 0045aa1c
        ;   XREF to: 0045aa23 (CONDITIONAL_JUMP)  ; LAB_0045aa23
    JMP 0x0045a97c                      ; 0045aa1e
        ;   XREF to: 0045a97c (UNCONDITIONAL_JUMP)  ; LAB_0045a97c
        ;   Label: LAB_0045aa1e
    PUSH 0xd1                           ; 0045aa23
        ;   Label: LAB_0045aa23
    PUSH 0x0                            ; 0045aa28
    MOV EAX,0x61b081                    ; 0045aa2a | = "Include texture maps? (Y/N) "
    PUSH EAX                            ; 0045aa2f | = "Include texture maps? (Y/N) "
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045aa30
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045aa35
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045aa38
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0045aa3d
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0045aa42
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    AND EAX,0xff                        ; 0045aa47
    PUSH EAX                            ; 0045aa4c
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 0045aa4d
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 0045aa52
    MOV dword ptr [EBP + -0x8],EAX      ; 0045aa55
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045aa58
    PUSH EAX                            ; 0045aa5b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045aa5c
    PUSH EAX                            ; 0045aa5f
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045aa60
    PUSH EAX                            ; 0045aa63
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045aa64
    PUSH EAX                            ; 0045aa67
    LEA EAX,[EBP + -0x5c]               ; 0045aa68
    PUSH EAX                            ; 0045aa6b
    CALL shape_design.c_exportModelToBIN_FUN_0045aa80 ; 0045aa6c
        ;   XREF to: 0045aa80 (UNCONDITIONAL_CALL)  ; void shape_design.c_exportModelToBIN_FUN_0045aa80(char * filename, int depth_mode, int scale_mode, int export_format, ...)
    ADD ESP,0x14                        ; 0045aa71
    MOV ESP,EBP                         ; 0045aa74
        ;   Label: LAB_0045aa74
    POP EBP                             ; 0045aa76
    POP EDI                             ; 0045aa77
    POP ESI                             ; 0045aa78
    POP EBX                             ; 0045aa79
    RET                                 ; 0045aa7a

