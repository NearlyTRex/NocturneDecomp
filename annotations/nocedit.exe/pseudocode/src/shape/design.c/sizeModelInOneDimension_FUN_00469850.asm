; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_sizeModelInOneDimension_FUN_00469850(void)
;
; Local Variables:
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined1       Stack[-0xf4]:1  local_f4
; undefined1       Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f740
;
; Referenced Globals:
;   TerminatedCString s_Enter_axis_to_size_X_Y_o_0061cfef
;   TerminatedCString s_Enter_c_distance_in_feet_0061d012
;   TerminatedCString s_f_d_d_0061d05a
;   TerminatedCString s_Need_distance_and_two_po_0061d063
;   TerminatedCString s_Invalid_point_0061d081
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdio.c_sscanf_FUN_0060013c
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469850
        ;   Label: shape_design.c_sizeModelInOneDimension_FUN_00469850
    PUSH ESI                            ; 00469851
    PUSH EDI                            ; 00469852
    PUSH EBP                            ; 00469853
    MOV EBP,ESP                         ; 00469854
    SUB ESP,0xec                        ; 00469856
    MOV dword ptr [EBP + -0x28],0x497423fe ; 0046985c
    MOV dword ptr [EBP + -0x24],0x497423fe ; 00469863
    MOV dword ptr [EBP + -0x20],0x497423fe ; 0046986a
    MOV dword ptr [EBP + -0x1c],0xc97423fe ; 00469871
    MOV dword ptr [EBP + -0x18],0xc97423fe ; 00469878
    MOV dword ptr [EBP + -0x14],0xc97423fe ; 0046987f
    MOV dword ptr [EBP + -0x44],0x0     ; 00469886
    JMP 0x00469895                      ; 0046988d | LAB_00469895
        ;   XREF to: 00469895 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x44]     ; 0046988f
        ;   Label: LAB_0046988f
    INC dword ptr [EBP + -0x44]         ; 00469892
    MOV EAX,dword ptr [EBP + -0x44]     ; 00469895
        ;   Label: LAB_00469895
    CMP EAX,dword ptr [0x01626408]      ; 00469898 | int g_VertexCount
    JGE 0x00469936                      ; 0046989e | LAB_00469936
        ;   XREF to: 00469936 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x44],0x14 ; 004698a4
    MOV EAX,dword ptr [EAX + 0x162640c] ; 004698a8 | SVertexData[20000] g_LoadedVertices
    MOV dword ptr [EBP + -0x34],EAX     ; 004698ae
    FLD float ptr [EBP + -0x34]         ; 004698b1
    FCOMP float ptr [EBP + -0x1c]       ; 004698b4
    FNSTSW AX                           ; 004698b7
    SAHF                                ; 004698b9
    JBE 0x004698c2                      ; 004698ba | LAB_004698c2
        ;   XREF to: 004698c2 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x34]     ; 004698bc
    MOV dword ptr [EBP + -0x1c],EAX     ; 004698bf
    FLD float ptr [EBP + -0x34]         ; 004698c2
        ;   Label: LAB_004698c2
    FCOMP float ptr [EBP + -0x28]       ; 004698c5
    FNSTSW AX                           ; 004698c8
    SAHF                                ; 004698ca
    JNC 0x004698d3                      ; 004698cb | LAB_004698d3
        ;   XREF to: 004698d3 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x34]     ; 004698cd
    MOV dword ptr [EBP + -0x28],EAX     ; 004698d0
    IMUL EAX,dword ptr [EBP + -0x44],0x14 ; 004698d3
        ;   Label: LAB_004698d3
    MOV EAX,dword ptr [EAX + 0x1626410] ; 004698d7 | DAT_01626410
    MOV dword ptr [EBP + -0x30],EAX     ; 004698dd
    FLD float ptr [EBP + -0x30]         ; 004698e0
    FCOMP float ptr [EBP + -0x18]       ; 004698e3
    FNSTSW AX                           ; 004698e6
    SAHF                                ; 004698e8
    JBE 0x004698f1                      ; 004698e9 | LAB_004698f1
        ;   XREF to: 004698f1 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x30]     ; 004698eb
    MOV dword ptr [EBP + -0x18],EAX     ; 004698ee
    FLD float ptr [EBP + -0x30]         ; 004698f1
        ;   Label: LAB_004698f1
    FCOMP float ptr [EBP + -0x24]       ; 004698f4
    FNSTSW AX                           ; 004698f7
    SAHF                                ; 004698f9
    JNC 0x00469902                      ; 004698fa | LAB_00469902
        ;   XREF to: 00469902 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x30]     ; 004698fc
    MOV dword ptr [EBP + -0x24],EAX     ; 004698ff
    IMUL EAX,dword ptr [EBP + -0x44],0x14 ; 00469902
        ;   Label: LAB_00469902
    MOV EAX,dword ptr [EAX + 0x1626414] ; 00469906 | g_LoadedVertices[0].vertex.z
    MOV dword ptr [EBP + -0x2c],EAX     ; 0046990c
    FLD float ptr [EBP + -0x2c]         ; 0046990f
    FCOMP float ptr [EBP + -0x14]       ; 00469912
    FNSTSW AX                           ; 00469915
    SAHF                                ; 00469917
    JBE 0x00469920                      ; 00469918 | LAB_00469920
        ;   XREF to: 00469920 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046991a
    MOV dword ptr [EBP + -0x14],EAX     ; 0046991d
    FLD float ptr [EBP + -0x2c]         ; 00469920
        ;   Label: LAB_00469920
    FCOMP float ptr [EBP + -0x20]       ; 00469923
    FNSTSW AX                           ; 00469926
    SAHF                                ; 00469928
    JNC 0x00469931                      ; 00469929 | LAB_00469931
        ;   XREF to: 00469931 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046992b
    MOV dword ptr [EBP + -0x20],EAX     ; 0046992e
    JMP 0x0046988f                      ; 00469931 | LAB_0046988f
        ;   Label: LAB_00469931
        ;   XREF to: 0046988f (UNCONDITIONAL_JUMP)
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00469936 | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00469936
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    PUSH 0x0                            ; 0046993b
    PUSH 0x0                            ; 0046993d
    MOV EAX,0x61cfef                    ; 0046993f | = "Enter axis to size - X, Y, or Z : " | s_Enter_axis_to_size_X_Y_o_0061cfef = Enter axis to size - X, Y, or Z :
    PUSH EAX                            ; 00469944 | = "Enter axis to size - X, Y, or Z : " | s_Enter_axis_to_size_X_Y_o_0061cfef = Enter axis to size - X, Y, or Z :
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00469945 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0046994a
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046994d | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00469952 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00469957 | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    AND EAX,0xff                        ; 0046995c
    PUSH EAX                            ; 00469961
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 00469962 | int crt_ctype.c_toupper_FUN_005ff9e0(int c)
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00469967
    MOV dword ptr [EBP + -0x38],EAX     ; 0046996a
    CMP dword ptr [EBP + -0x38],0x58    ; 0046996d
    JL 0x00469979                       ; 00469971 | LAB_00469979
        ;   XREF to: 00469979 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x38],0x5a    ; 00469973
    JLE 0x0046997e                      ; 00469977 | LAB_0046997e
        ;   XREF to: 0046997e (CONDITIONAL_JUMP)
    JMP 0x00469bbb                      ; 00469979 | LAB_00469bbb
        ;   Label: LAB_00469979
        ;   XREF to: 00469bbb (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBP + -0x38]     ; 0046997e
        ;   Label: LAB_0046997e
    PUSH ECX                            ; 00469981
    MOV ECX,0x61d012                    ; 00469982 | = "Enter %c distance in feet (,min,max f..." | s_Enter_c_distance_in_feet_0061d012 = Enter %c distance in feet (,min,max for user-defined min/max points) :
    PUSH ECX                            ; 00469987 | = "Enter %c distance in feet (,min,max f..." | s_Enter_c_distance_in_feet_0061d012 = Enter %c distance in feet (,min,max for user-defined min/max points) :
    LEA ECX,[EBP + 0xffffff1c]          ; 00469988
    PUSH ECX                            ; 0046998e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0046998f | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00469994
    LEA ECX,[EBP + 0xffffff1c]          ; 00469997
    PUSH ECX                            ; 0046999d
    PUSH 0x16                           ; 0046999e
    PUSH 0x0                            ; 004699a0
    PUSH 0x14                           ; 004699a2
    LEA ECX,[EBP + 0xffffff6c]          ; 004699a4
    PUSH ECX                            ; 004699aa
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 004699ab | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004699b0
    LEA EDI,[EBP + 0xffffff6c]          ; 004699b3
    SUB ECX,ECX                         ; 004699b9
    DEC ECX                             ; 004699bb
    XOR EAX,EAX                         ; 004699bc
    SCASB.REPNE ES:EDI                  ; 004699be
    NOT ECX                             ; 004699c0
    DEC ECX                             ; 004699c2
    TEST ECX,ECX                        ; 004699c3
    JNZ 0x004699cc                      ; 004699c5 | LAB_004699cc
        ;   XREF to: 004699cc (CONDITIONAL_JUMP)
    JMP 0x00469bbb                      ; 004699c7 | LAB_00469bbb
        ;   XREF to: 00469bbb (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x40]               ; 004699cc
        ;   Label: LAB_004699cc
    PUSH EAX                            ; 004699cf
    LEA EAX,[EBP + -0x3c]               ; 004699d0
    PUSH EAX                            ; 004699d3
    LEA EAX,[EBP + -0x10]               ; 004699d4
    PUSH EAX                            ; 004699d7
    MOV EAX,0x61d05a                    ; 004699d8 | = "%f,%d,%d" | s_f_d_d_0061d05a = %f,%d,%d
    PUSH EAX                            ; 004699dd | = "%f,%d,%d" | s_f_d_d_0061d05a = %f,%d,%d
    LEA EAX,[EBP + 0xffffff6c]          ; 004699de
    PUSH EAX                            ; 004699e4
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004699e5 | int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004699ea
    MOV dword ptr [EBP + -0x44],EAX     ; 004699ed
    CMP dword ptr [EBP + -0x44],0x1     ; 004699f0
    JLE 0x00469af4                      ; 004699f4 | LAB_00469af4
        ;   XREF to: 00469af4 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x44],0x3     ; 004699fa
    JZ 0x00469a21                       ; 004699fe | LAB_00469a21
        ;   XREF to: 00469a21 (CONDITIONAL_JUMP)
    PUSH 0x2c                           ; 00469a00
    PUSH 0x0                            ; 00469a02
    MOV EAX,0x61d063                    ; 00469a04 | = "Need distance and two points." | s_Need_distance_and_two_po_0061d063 = Need distance and two points.
    PUSH EAX                            ; 00469a09 | = "Need distance and two points." | s_Need_distance_and_two_po_0061d063 = Need distance and two points.
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00469a0a | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00469a0f
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00469a12 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00469a17 | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    JMP 0x00469bbb                      ; 00469a1c | LAB_00469bbb
        ;   XREF to: 00469bbb (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x3c],0x0     ; 00469a21
        ;   Label: LAB_00469a21
    JL 0x00469a2d                       ; 00469a25 | LAB_00469a2d
        ;   XREF to: 00469a2d (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x40],0x0     ; 00469a27
    JGE 0x00469a2f                      ; 00469a2b | LAB_00469a2f
        ;   XREF to: 00469a2f (CONDITIONAL_JUMP)
    JMP 0x00469a3a                      ; 00469a2d | LAB_00469a3a
        ;   Label: LAB_00469a2d
        ;   XREF to: 00469a3a (UNCONDITIONAL_JUMP)
    MOV EAX,[0x01626408]                ; 00469a2f | int g_VertexCount
        ;   Label: LAB_00469a2f
    DEC EAX                             ; 00469a34
    CMP EAX,dword ptr [EBP + -0x3c]     ; 00469a35
    JGE 0x00469a3c                      ; 00469a38 | LAB_00469a3c
        ;   XREF to: 00469a3c (CONDITIONAL_JUMP)
    JMP 0x00469a47                      ; 00469a3a | LAB_00469a47
        ;   Label: LAB_00469a3a
        ;   XREF to: 00469a47 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x01626408]                ; 00469a3c | int g_VertexCount
        ;   Label: LAB_00469a3c
    DEC EAX                             ; 00469a41
    CMP EAX,dword ptr [EBP + -0x40]     ; 00469a42
    JGE 0x00469a68                      ; 00469a45 | LAB_00469a68
        ;   XREF to: 00469a68 (CONDITIONAL_JUMP)
    PUSH 0x2c                           ; 00469a47
        ;   Label: LAB_00469a47
    PUSH 0x0                            ; 00469a49
    MOV EAX,0x61d081                    ; 00469a4b | = "Invalid point." | s_Invalid_point_0061d081 = Invalid point.
    PUSH EAX                            ; 00469a50 | = "Invalid point." | s_Invalid_point_0061d081 = Invalid point.
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00469a51 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00469a56
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00469a59 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00469a5e | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    JMP 0x00469bbb                      ; 00469a63 | LAB_00469bbb
        ;   XREF to: 00469bbb (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x38]     ; 00469a68
        ;   Label: LAB_00469a68
    MOV dword ptr [EBP + 0xffffff18],EAX ; 00469a6b
    JMP 0x00469acc                      ; 00469a71 | LAB_00469acc
        ;   XREF to: 00469acc (UNCONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x40],0x14 ; 00469a73
        ;   Label: LAB_00469a73
    MOV EAX,dword ptr [EAX + 0x162640c] ; 00469a77 | SVertexData[20000] g_LoadedVertices
    MOV dword ptr [EBP + -0x1c],EAX     ; 00469a7d
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 00469a80
    MOV EAX,dword ptr [EAX + 0x162640c] ; 00469a84 | SVertexData[20000] g_LoadedVertices
    MOV dword ptr [EBP + -0x28],EAX     ; 00469a8a
    JMP 0x00469af4                      ; 00469a8d | LAB_00469af4
        ;   XREF to: 00469af4 (UNCONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x40],0x14 ; 00469a92
        ;   Label: LAB_00469a92
    MOV EAX,dword ptr [EAX + 0x1626410] ; 00469a96 | DAT_01626410
    MOV dword ptr [EBP + -0x18],EAX     ; 00469a9c
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 00469a9f
    MOV EAX,dword ptr [EAX + 0x1626410] ; 00469aa3 | DAT_01626410
    MOV dword ptr [EBP + -0x24],EAX     ; 00469aa9
    JMP 0x00469af4                      ; 00469aac | LAB_00469af4
        ;   XREF to: 00469af4 (UNCONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x40],0x14 ; 00469aae
        ;   Label: LAB_00469aae
    MOV EAX,dword ptr [EAX + 0x1626414] ; 00469ab2 | g_LoadedVertices[0].vertex.z
    MOV dword ptr [EBP + -0x14],EAX     ; 00469ab8
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 00469abb
    MOV EAX,dword ptr [EAX + 0x1626414] ; 00469abf | g_LoadedVertices[0].vertex.z
    MOV dword ptr [EBP + -0x20],EAX     ; 00469ac5
    JMP 0x00469af4                      ; 00469ac8 | LAB_00469af4
        ;   XREF to: 00469af4 (UNCONDITIONAL_JUMP)
    JMP 0x00469af4                      ; 00469aca | LAB_00469af4
        ;   Label: LAB_00469aca
        ;   XREF to: 00469af4 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0xffffff18],0x59 ; 00469acc
        ;   Label: LAB_00469acc
    JC 0x00469ae9                       ; 00469ad3 | LAB_00469ae9
        ;   XREF to: 00469ae9 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0xffffff18],0x59 ; 00469ad5
    JBE 0x00469a92                      ; 00469adc | LAB_00469a92
        ;   XREF to: 00469a92 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0xffffff18],0x5a ; 00469ade
    JZ 0x00469aae                       ; 00469ae5 | LAB_00469aae
        ;   XREF to: 00469aae (CONDITIONAL_JUMP)
    JMP 0x00469aca                      ; 00469ae7 | LAB_00469aca
        ;   XREF to: 00469aca (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0xffffff18],0x58 ; 00469ae9
        ;   Label: LAB_00469ae9
    JZ 0x00469a73                       ; 00469af0 | LAB_00469a73
        ;   XREF to: 00469a73 (CONDITIONAL_JUMP)
    JMP 0x00469aca                      ; 00469af2 | LAB_00469aca
        ;   XREF to: 00469aca (UNCONDITIONAL_JUMP)
    FLD float ptr [EBP + -0x1c]         ; 00469af4
        ;   Label: LAB_00469af4
    FSUB float ptr [EBP + -0x28]        ; 00469af7
    FDIVR float ptr [EBP + -0x10]       ; 00469afa
    FSTP float ptr [EBP + -0xc]         ; 00469afd
    FLD float ptr [EBP + -0x18]         ; 00469b00
    FSUB float ptr [EBP + -0x24]        ; 00469b03
    FDIVR float ptr [EBP + -0x10]       ; 00469b06
    FSTP float ptr [EBP + -0x8]         ; 00469b09
    FLD float ptr [EBP + -0x14]         ; 00469b0c
    FSUB float ptr [EBP + -0x20]        ; 00469b0f
    FDIVR float ptr [EBP + -0x10]       ; 00469b12
    FSTP float ptr [EBP + -0x4]         ; 00469b15
    MOV dword ptr [EBP + -0x44],0x0     ; 00469b18
    JMP 0x00469b27                      ; 00469b1f | LAB_00469b27
        ;   XREF to: 00469b27 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x44]     ; 00469b21
        ;   Label: LAB_00469b21
    INC dword ptr [EBP + -0x44]         ; 00469b24
    MOV EAX,dword ptr [EBP + -0x44]     ; 00469b27
        ;   Label: LAB_00469b27
    CMP EAX,dword ptr [0x01626408]      ; 00469b2a | int g_VertexCount
    JGE 0x00469bbb                      ; 00469b30 | LAB_00469bbb
        ;   XREF to: 00469bbb (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x38]     ; 00469b36
    MOV dword ptr [EBP + 0xffffff14],EAX ; 00469b39
    JMP 0x00469b8e                      ; 00469b3f | LAB_00469b8e
        ;   XREF to: 00469b8e (UNCONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x44],0x14 ; 00469b41
        ;   Label: LAB_00469b41
    FLD float ptr [EAX + 0x162640c]     ; 00469b45 | SVertexData[20000] g_LoadedVertices
    FMUL float ptr [EBP + -0xc]         ; 00469b4b
    IMUL EAX,dword ptr [EBP + -0x44],0x14 ; 00469b4e
    FSTP float ptr [EAX + 0x162640c]    ; 00469b52 | SVertexData[20000] g_LoadedVertices
    JMP 0x00469bb6                      ; 00469b58 | LAB_00469bb6
        ;   XREF to: 00469bb6 (UNCONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x44],0x14 ; 00469b5a
        ;   Label: LAB_00469b5a
    FLD float ptr [EAX + 0x1626410]     ; 00469b5e | DAT_01626410
    FMUL float ptr [EBP + -0x8]         ; 00469b64
    IMUL EAX,dword ptr [EBP + -0x44],0x14 ; 00469b67
    FSTP float ptr [EAX + 0x1626410]    ; 00469b6b | DAT_01626410
    JMP 0x00469bb6                      ; 00469b71 | LAB_00469bb6
        ;   XREF to: 00469bb6 (UNCONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x44],0x14 ; 00469b73
        ;   Label: LAB_00469b73
    FLD float ptr [EAX + 0x1626414]     ; 00469b77 | g_LoadedVertices[0].vertex.z
    FMUL float ptr [EBP + -0x4]         ; 00469b7d
    IMUL EAX,dword ptr [EBP + -0x44],0x14 ; 00469b80
    FSTP float ptr [EAX + 0x1626414]    ; 00469b84 | g_LoadedVertices[0].vertex.z
    JMP 0x00469bb6                      ; 00469b8a | LAB_00469bb6
        ;   XREF to: 00469bb6 (UNCONDITIONAL_JUMP)
    JMP 0x00469bb6                      ; 00469b8c | LAB_00469bb6
        ;   Label: LAB_00469b8c
        ;   XREF to: 00469bb6 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0xffffff14],0x59 ; 00469b8e
        ;   Label: LAB_00469b8e
    JC 0x00469bab                       ; 00469b95 | LAB_00469bab
        ;   XREF to: 00469bab (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0xffffff14],0x59 ; 00469b97
    JBE 0x00469b5a                      ; 00469b9e | LAB_00469b5a
        ;   XREF to: 00469b5a (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0xffffff14],0x5a ; 00469ba0
    JZ 0x00469b73                       ; 00469ba7 | LAB_00469b73
        ;   XREF to: 00469b73 (CONDITIONAL_JUMP)
    JMP 0x00469b8c                      ; 00469ba9 | LAB_00469b8c
        ;   XREF to: 00469b8c (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0xffffff14],0x58 ; 00469bab
        ;   Label: LAB_00469bab
    JZ 0x00469b41                       ; 00469bb2 | LAB_00469b41
        ;   XREF to: 00469b41 (CONDITIONAL_JUMP)
    JMP 0x00469b8c                      ; 00469bb4 | LAB_00469b8c
        ;   XREF to: 00469b8c (UNCONDITIONAL_JUMP)
    JMP 0x00469b21                      ; 00469bb6 | LAB_00469b21
        ;   Label: LAB_00469bb6
        ;   XREF to: 00469b21 (UNCONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 00469bbb
        ;   Label: LAB_00469bbb
    POP EBP                             ; 00469bbd
    POP EDI                             ; 00469bbe
    POP ESI                             ; 00469bbf
    POP EBX                             ; 00469bc0
    RET                                 ; 00469bc1

