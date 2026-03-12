; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_centerObject_FUN_00466610(void)
;
; Local Variables:
; undefined8       Stack[-0xc4]:8  local_c4
; undefined4       Stack[-0xbc]:4  local_bc
; char[80]         Stack[-0xb8]:80  local_b8
; double           Stack[-0x68]:8  local_68
; double           Stack[-0x60]:8  local_60
; double           Stack[-0x58]:8  local_58
; double           Stack[-0x50]:8  local_50
; double           Stack[-0x48]:8  local_48
; double           Stack[-0x40]:8  local_40
; double           Stack[-0x38]:8  local_38
; double           Stack[-0x30]:8  local_30
; double           Stack[-0x28]:8  local_28
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f69b
;
; Referenced Globals:
;   TerminatedCString s_Press_Enter_or_enter_min_0061c725
;   TerminatedCString s_d_d_0061c74e
;   TerminatedCString s_Need_two_points_0061c754
;   TerminatedCString s_Invalid_point_0061c765
;   TerminatedCString s_Which_axis_to_center_X_Y_0061c774
;   double g_CenteringFactor = 0.5
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_stdio.c_sscanf_FUN_0060013c
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466610
        ;   Label: shape_design.c_centerObject_FUN_00466610
    PUSH ESI                            ; 00466611
    PUSH EDI                            ; 00466612
    PUSH EBP                            ; 00466613
    MOV EBP,ESP                         ; 00466614
    SUB ESP,0xb4                        ; 00466616
    MOV dword ptr [EBP + -0x58],0xcccccccd ; 0046661c
    MOV dword ptr [EBP + -0x54],0x412e847f ; 00466623
    MOV dword ptr [EBP + -0x50],0xcccccccd ; 0046662a
    MOV dword ptr [EBP + -0x4c],0x412e847f ; 00466631
    MOV dword ptr [EBP + -0x48],0xcccccccd ; 00466638
    MOV dword ptr [EBP + -0x44],0x412e847f ; 0046663f
    MOV dword ptr [EBP + -0x28],0xcccccccd ; 00466646
    MOV dword ptr [EBP + -0x24],0xc12e847f ; 0046664d
    MOV dword ptr [EBP + -0x20],0xcccccccd ; 00466654
    MOV dword ptr [EBP + -0x1c],0xc12e847f ; 0046665b
    MOV dword ptr [EBP + -0x18],0xcccccccd ; 00466662
    MOV dword ptr [EBP + -0x14],0xc12e847f ; 00466669
    MOV dword ptr [EBP + -0xc],0x0      ; 00466670
    JMP 0x0046667f                      ; 00466677
        ;   XREF to: 0046667f (UNCONDITIONAL_JUMP)  ; LAB_0046667f
    MOV EAX,dword ptr [EBP + -0xc]      ; 00466679
        ;   Label: LAB_00466679
    INC dword ptr [EBP + -0xc]          ; 0046667c
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046667f
        ;   Label: LAB_0046667f
    CMP EAX,dword ptr [0x01626408]      ; 00466682 | g_VertexCount
    JGE 0x00466744                      ; 00466688
        ;   XREF to: 00466744 (CONDITIONAL_JUMP)  ; LAB_00466744
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 0046668e
    FLD float ptr [EAX + 0x162640c]     ; 00466692 | g_LoadedVertices
    FSTP double ptr [EBP + -0x38]       ; 00466698
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 0046669b
    FLD float ptr [EAX + 0x1626410]     ; 0046669f | DAT_01626410
    FSTP double ptr [EBP + -0x30]       ; 004666a5
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 004666a8
    FLD float ptr [EAX + 0x1626414]     ; 004666ac | g_LoadedVertices[0].vertex.z
    FSTP double ptr [EBP + -0x40]       ; 004666b2
    FLD double ptr [EBP + -0x38]        ; 004666b5
    FCOMP double ptr [EBP + -0x28]      ; 004666b8
    FNSTSW AX                           ; 004666bb
    SAHF                                ; 004666bd
    JBE 0x004666cc                      ; 004666be
        ;   XREF to: 004666cc (CONDITIONAL_JUMP)  ; LAB_004666cc
    MOV EAX,dword ptr [EBP + -0x38]     ; 004666c0
    MOV dword ptr [EBP + -0x28],EAX     ; 004666c3
    MOV EAX,dword ptr [EBP + -0x34]     ; 004666c6
    MOV dword ptr [EBP + -0x24],EAX     ; 004666c9
    FLD double ptr [EBP + -0x38]        ; 004666cc
        ;   Label: LAB_004666cc
    FCOMP double ptr [EBP + -0x58]      ; 004666cf
    FNSTSW AX                           ; 004666d2
    SAHF                                ; 004666d4
    JNC 0x004666e3                      ; 004666d5
        ;   XREF to: 004666e3 (CONDITIONAL_JUMP)  ; LAB_004666e3
    MOV EAX,dword ptr [EBP + -0x38]     ; 004666d7
    MOV dword ptr [EBP + -0x58],EAX     ; 004666da
    MOV EAX,dword ptr [EBP + -0x34]     ; 004666dd
    MOV dword ptr [EBP + -0x54],EAX     ; 004666e0
    FLD double ptr [EBP + -0x30]        ; 004666e3
        ;   Label: LAB_004666e3
    FCOMP double ptr [EBP + -0x20]      ; 004666e6
    FNSTSW AX                           ; 004666e9
    SAHF                                ; 004666eb
    JBE 0x004666fa                      ; 004666ec
        ;   XREF to: 004666fa (CONDITIONAL_JUMP)  ; LAB_004666fa
    MOV EAX,dword ptr [EBP + -0x30]     ; 004666ee
    MOV dword ptr [EBP + -0x20],EAX     ; 004666f1
    MOV EAX,dword ptr [EBP + -0x2c]     ; 004666f4
    MOV dword ptr [EBP + -0x1c],EAX     ; 004666f7
    FLD double ptr [EBP + -0x30]        ; 004666fa
        ;   Label: LAB_004666fa
    FCOMP double ptr [EBP + -0x50]      ; 004666fd
    FNSTSW AX                           ; 00466700
    SAHF                                ; 00466702
    JNC 0x00466711                      ; 00466703
        ;   XREF to: 00466711 (CONDITIONAL_JUMP)  ; LAB_00466711
    MOV EAX,dword ptr [EBP + -0x30]     ; 00466705
    MOV dword ptr [EBP + -0x50],EAX     ; 00466708
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046670b
    MOV dword ptr [EBP + -0x4c],EAX     ; 0046670e
    FLD double ptr [EBP + -0x40]        ; 00466711
        ;   Label: LAB_00466711
    FCOMP double ptr [EBP + -0x18]      ; 00466714
    FNSTSW AX                           ; 00466717
    SAHF                                ; 00466719
    JBE 0x00466728                      ; 0046671a
        ;   XREF to: 00466728 (CONDITIONAL_JUMP)  ; LAB_00466728
    MOV EAX,dword ptr [EBP + -0x40]     ; 0046671c
    MOV dword ptr [EBP + -0x18],EAX     ; 0046671f
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00466722
    MOV dword ptr [EBP + -0x14],EAX     ; 00466725
    FLD double ptr [EBP + -0x40]        ; 00466728
        ;   Label: LAB_00466728
    FCOMP double ptr [EBP + -0x48]      ; 0046672b
    FNSTSW AX                           ; 0046672e
    SAHF                                ; 00466730
    JNC 0x0046673f                      ; 00466731
        ;   XREF to: 0046673f (CONDITIONAL_JUMP)  ; LAB_0046673f
    MOV EAX,dword ptr [EBP + -0x40]     ; 00466733
    MOV dword ptr [EBP + -0x48],EAX     ; 00466736
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00466739
    MOV dword ptr [EBP + -0x44],EAX     ; 0046673c
    JMP 0x00466679                      ; 0046673f
        ;   XREF to: 00466679 (UNCONDITIONAL_JUMP)  ; LAB_00466679
        ;   Label: LAB_0046673f
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00466744
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00466744
    MOV EAX,0x61c725                    ; 00466749 | = "Press <Enter> or enter min,max points : "
    PUSH EAX                            ; 0046674e | = "Press <Enter> or enter min,max points : "
    PUSH 0x0                            ; 0046674f
    PUSH 0x0                            ; 00466751
    PUSH 0x14                           ; 00466753
    LEA EAX,[EBP + 0xffffff58]          ; 00466755
    PUSH EAX                            ; 0046675b
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046675c
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 00466761
    CMP EAX,0x1b                        ; 00466764
    JNZ 0x0046676e                      ; 00466767
        ;   XREF to: 0046676e (CONDITIONAL_JUMP)  ; LAB_0046676e
    JMP 0x00466a21                      ; 00466769
        ;   XREF to: 00466a21 (UNCONDITIONAL_JUMP)  ; LAB_00466a21
    LEA EAX,[EBP + -0x10]               ; 0046676e
        ;   Label: LAB_0046676e
    PUSH EAX                            ; 00466771
    LEA EAX,[EBP + -0x4]                ; 00466772
    PUSH EAX                            ; 00466775
    MOV EAX,0x61c74e                    ; 00466776 | = "%d,%d"
    PUSH EAX                            ; 0046677b | = "%d,%d"
    LEA EAX,[EBP + 0xffffff58]          ; 0046677c
    PUSH EAX                            ; 00466782
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00466783
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 00466788
    MOV dword ptr [EBP + -0xc],EAX      ; 0046678b
    CMP dword ptr [EBP + -0xc],0x0      ; 0046678e
    JLE 0x004668bf                      ; 00466792
        ;   XREF to: 004668bf (CONDITIONAL_JUMP)  ; LAB_004668bf
    CMP dword ptr [EBP + -0xc],0x2      ; 00466798
    JZ 0x004667bf                       ; 0046679c
        ;   XREF to: 004667bf (CONDITIONAL_JUMP)  ; LAB_004667bf
    PUSH 0x16                           ; 0046679e
    PUSH 0x0                            ; 004667a0
    MOV EAX,0x61c754                    ; 004667a2 | = "Need two points."
    PUSH EAX                            ; 004667a7 | = "Need two points."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004667a8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004667ad
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004667b0
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 004667b5
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x00466a21                      ; 004667ba
        ;   XREF to: 00466a21 (UNCONDITIONAL_JUMP)  ; LAB_00466a21
    CMP dword ptr [EBP + -0x4],0x0      ; 004667bf
        ;   Label: LAB_004667bf
    JL 0x004667cb                       ; 004667c3
        ;   XREF to: 004667cb (CONDITIONAL_JUMP)  ; LAB_004667cb
    CMP dword ptr [EBP + -0x10],0x0     ; 004667c5
    JGE 0x004667cd                      ; 004667c9
        ;   XREF to: 004667cd (CONDITIONAL_JUMP)  ; LAB_004667cd
    JMP 0x004667d8                      ; 004667cb
        ;   XREF to: 004667d8 (UNCONDITIONAL_JUMP)  ; LAB_004667d8
        ;   Label: LAB_004667cb
    MOV EAX,[0x01626408]                ; 004667cd | g_VertexCount
        ;   Label: LAB_004667cd
    DEC EAX                             ; 004667d2
    CMP EAX,dword ptr [EBP + -0x4]      ; 004667d3
    JGE 0x004667da                      ; 004667d6
        ;   XREF to: 004667da (CONDITIONAL_JUMP)  ; LAB_004667da
    JMP 0x004667e5                      ; 004667d8
        ;   XREF to: 004667e5 (UNCONDITIONAL_JUMP)  ; LAB_004667e5
        ;   Label: LAB_004667d8
    MOV EAX,[0x01626408]                ; 004667da | g_VertexCount
        ;   Label: LAB_004667da
    DEC EAX                             ; 004667df
    CMP EAX,dword ptr [EBP + -0x10]     ; 004667e0
    JGE 0x00466806                      ; 004667e3
        ;   XREF to: 00466806 (CONDITIONAL_JUMP)  ; LAB_00466806
    PUSH 0x16                           ; 004667e5
        ;   Label: LAB_004667e5
    PUSH 0x0                            ; 004667e7
    MOV EAX,0x61c765                    ; 004667e9 | = "Invalid point."
    PUSH EAX                            ; 004667ee | = "Invalid point."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004667ef
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004667f4
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004667f7
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 004667fc
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x00466a21                      ; 00466801
        ;   XREF to: 00466a21 (UNCONDITIONAL_JUMP)  ; LAB_00466a21
    PUSH 0x16                           ; 00466806
        ;   Label: LAB_00466806
    PUSH 0x0                            ; 00466808
    MOV EAX,0x61c774                    ; 0046680a | = "Which axis to center - X, Y, or Z? : "
    PUSH EAX                            ; 0046680f | = "Which axis to center - X, Y, or Z? : "
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00466810
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00466815
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00466818
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046681d
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    AND EAX,0xff                        ; 00466822
    PUSH EAX                            ; 00466827
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 00466828
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 0046682d
    MOV dword ptr [EBP + -0x8],EAX      ; 00466830
    MOV EAX,dword ptr [EBP + -0x8]      ; 00466833
    MOV dword ptr [EBP + 0xffffff54],EAX ; 00466836
    JMP 0x00466897                      ; 0046683c
        ;   XREF to: 00466897 (UNCONDITIONAL_JUMP)  ; LAB_00466897
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 0046683e
        ;   Label: LAB_0046683e
    FLD float ptr [EAX + 0x162640c]     ; 00466842 | g_LoadedVertices
    FSTP double ptr [EBP + -0x28]       ; 00466848
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0046684b
    FLD float ptr [EAX + 0x162640c]     ; 0046684f | g_LoadedVertices
    FSTP double ptr [EBP + -0x58]       ; 00466855
    JMP 0x004668bf                      ; 00466858
        ;   XREF to: 004668bf (UNCONDITIONAL_JUMP)  ; LAB_004668bf
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 0046685d
        ;   Label: LAB_0046685d
    FLD float ptr [EAX + 0x1626410]     ; 00466861 | DAT_01626410
    FSTP double ptr [EBP + -0x20]       ; 00466867
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0046686a
    FLD float ptr [EAX + 0x1626410]     ; 0046686e | DAT_01626410
    FSTP double ptr [EBP + -0x50]       ; 00466874
    JMP 0x004668bf                      ; 00466877
        ;   XREF to: 004668bf (UNCONDITIONAL_JUMP)  ; LAB_004668bf
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 00466879
        ;   Label: LAB_00466879
    FLD float ptr [EAX + 0x1626414]     ; 0046687d | g_LoadedVertices[0].vertex.z
    FSTP double ptr [EBP + -0x18]       ; 00466883
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 00466886
    FLD float ptr [EAX + 0x1626414]     ; 0046688a | g_LoadedVertices[0].vertex.z
    FSTP double ptr [EBP + -0x48]       ; 00466890
    JMP 0x004668bf                      ; 00466893
        ;   XREF to: 004668bf (UNCONDITIONAL_JUMP)  ; LAB_004668bf
    JMP 0x004668bf                      ; 00466895
        ;   XREF to: 004668bf (UNCONDITIONAL_JUMP)  ; LAB_004668bf
        ;   Label: LAB_00466895
    CMP dword ptr [EBP + 0xffffff54],0x59 ; 00466897
        ;   Label: LAB_00466897
    JC 0x004668b4                       ; 0046689e
        ;   XREF to: 004668b4 (CONDITIONAL_JUMP)  ; LAB_004668b4
    CMP dword ptr [EBP + 0xffffff54],0x59 ; 004668a0
    JBE 0x0046685d                      ; 004668a7
        ;   XREF to: 0046685d (CONDITIONAL_JUMP)  ; LAB_0046685d
    CMP dword ptr [EBP + 0xffffff54],0x5a ; 004668a9
    JZ 0x00466879                       ; 004668b0
        ;   XREF to: 00466879 (CONDITIONAL_JUMP)  ; LAB_00466879
    JMP 0x00466895                      ; 004668b2
        ;   XREF to: 00466895 (UNCONDITIONAL_JUMP)  ; LAB_00466895
    CMP dword ptr [EBP + 0xffffff54],0x58 ; 004668b4
        ;   Label: LAB_004668b4
    JZ 0x0046683e                       ; 004668bb
        ;   XREF to: 0046683e (CONDITIONAL_JUMP)  ; LAB_0046683e
    JMP 0x00466895                      ; 004668bd
        ;   XREF to: 00466895 (UNCONDITIONAL_JUMP)  ; LAB_00466895
    MOV dword ptr [EBP + -0x38],0x0     ; 004668bf
        ;   Label: LAB_004668bf
    MOV dword ptr [EBP + -0x34],0x0     ; 004668c6
    MOV dword ptr [EBP + -0x30],0x0     ; 004668cd
    MOV dword ptr [EBP + -0x2c],0x0     ; 004668d4
    MOV dword ptr [EBP + -0x40],0x0     ; 004668db
    MOV dword ptr [EBP + -0x3c],0x0     ; 004668e2
    MOV dword ptr [EBP + -0xc],0x0      ; 004668e9
    JMP 0x004668f8                      ; 004668f0
        ;   XREF to: 004668f8 (UNCONDITIONAL_JUMP)  ; LAB_004668f8
    MOV EAX,dword ptr [EBP + -0xc]      ; 004668f2
        ;   Label: LAB_004668f2
    INC dword ptr [EBP + -0xc]          ; 004668f5
    MOV EAX,dword ptr [EBP + -0xc]      ; 004668f8
        ;   Label: LAB_004668f8
    CMP EAX,dword ptr [0x01626408]      ; 004668fb | g_VertexCount
    JGE 0x00466935                      ; 00466901
        ;   XREF to: 00466935 (CONDITIONAL_JUMP)  ; LAB_00466935
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 00466903
    FLD float ptr [EAX + 0x162640c]     ; 00466907 | g_LoadedVertices
    FADD double ptr [EBP + -0x38]       ; 0046690d
    FSTP double ptr [EBP + -0x38]       ; 00466910
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 00466913
    FLD float ptr [EAX + 0x1626410]     ; 00466917 | DAT_01626410
    FADD double ptr [EBP + -0x30]       ; 0046691d
    FSTP double ptr [EBP + -0x30]       ; 00466920
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 00466923
    FLD float ptr [EAX + 0x1626414]     ; 00466927 | g_LoadedVertices[0].vertex.z
    FADD double ptr [EBP + -0x40]       ; 0046692d
    FSTP double ptr [EBP + -0x40]       ; 00466930
    JMP 0x004668f2                      ; 00466933
        ;   XREF to: 004668f2 (UNCONDITIONAL_JUMP)  ; LAB_004668f2
    FILD dword ptr [0x01626408]         ; 00466935 | g_VertexCount
        ;   Label: LAB_00466935
    FDIVR double ptr [EBP + -0x38]      ; 0046693b
    FSTP double ptr [EBP + -0x38]       ; 0046693e
    FILD dword ptr [0x01626408]         ; 00466941 | g_VertexCount
    FDIVR double ptr [EBP + -0x30]      ; 00466947
    FSTP double ptr [EBP + -0x30]       ; 0046694a
    FILD dword ptr [0x01626408]         ; 0046694d | g_VertexCount
    FDIVR double ptr [EBP + -0x40]      ; 00466953
    FSTP double ptr [EBP + -0x40]       ; 00466956
    MOV dword ptr [EBP + -0xc],0x0      ; 00466959
    JMP 0x00466968                      ; 00466960
        ;   XREF to: 00466968 (UNCONDITIONAL_JUMP)  ; LAB_00466968
    MOV EAX,dword ptr [EBP + -0xc]      ; 00466962
        ;   Label: LAB_00466962
    INC dword ptr [EBP + -0xc]          ; 00466965
    MOV EAX,dword ptr [EBP + -0xc]      ; 00466968
        ;   Label: LAB_00466968
    CMP EAX,dword ptr [0x01626408]      ; 0046696b | g_VertexCount
    JGE 0x00466a21                      ; 00466971
        ;   XREF to: 00466a21 (CONDITIONAL_JUMP)  ; LAB_00466a21
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 00466977
    FLD double ptr [EBP + -0x28]        ; 0046697b
    FSUB double ptr [EBP + -0x58]       ; 0046697e
    FMUL double ptr [0x0061c79e]        ; 00466981 | g_CenteringFactor
    FADD double ptr [EBP + -0x58]       ; 00466987
    FLD float ptr [EAX + 0x162640c]     ; 0046698a | g_LoadedVertices
    FSTP double ptr [EBP + 0xffffff4c]  ; 00466990
    FSUBR double ptr [EBP + 0xffffff4c] ; 00466996
    FSTP double ptr [EBP + 0xffffff4c]  ; 0046699c
    FLD double ptr [EBP + 0xffffff4c]   ; 004669a2
    FSTP float ptr [EAX + 0x162640c]    ; 004669a8 | g_LoadedVertices
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 004669ae
    FLD double ptr [EBP + -0x20]        ; 004669b2
    FSUB double ptr [EBP + -0x50]       ; 004669b5
    FMUL double ptr [0x0061c79e]        ; 004669b8 | g_CenteringFactor
    FADD double ptr [EBP + -0x50]       ; 004669be
    FLD float ptr [EAX + 0x1626410]     ; 004669c1 | DAT_01626410
    FSTP double ptr [EBP + 0xffffff4c]  ; 004669c7
    FSUBR double ptr [EBP + 0xffffff4c] ; 004669cd
    FSTP double ptr [EBP + 0xffffff4c]  ; 004669d3
    FLD double ptr [EBP + 0xffffff4c]   ; 004669d9
    FSTP float ptr [EAX + 0x1626410]    ; 004669df | DAT_01626410
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 004669e5
    FLD double ptr [EBP + -0x18]        ; 004669e9
    FSUB double ptr [EBP + -0x48]       ; 004669ec
    FMUL double ptr [0x0061c79e]        ; 004669ef | g_CenteringFactor
    FADD double ptr [EBP + -0x48]       ; 004669f5
    FLD float ptr [EAX + 0x1626414]     ; 004669f8 | g_LoadedVertices[0].vertex.z
    FSTP double ptr [EBP + 0xffffff4c]  ; 004669fe
    FSUBR double ptr [EBP + 0xffffff4c] ; 00466a04
    FSTP double ptr [EBP + 0xffffff4c]  ; 00466a0a
    FLD double ptr [EBP + 0xffffff4c]   ; 00466a10
    FSTP float ptr [EAX + 0x1626414]    ; 00466a16 | g_LoadedVertices[0].vertex.z
    JMP 0x00466962                      ; 00466a1c
        ;   XREF to: 00466962 (UNCONDITIONAL_JUMP)  ; LAB_00466962
    MOV ESP,EBP                         ; 00466a21
        ;   Label: LAB_00466a21
    POP EBP                             ; 00466a23
    POP EDI                             ; 00466a24
    POP ESI                             ; 00466a25
    POP EBX                             ; 00466a26
    RET                                 ; 00466a27

