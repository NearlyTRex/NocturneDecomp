; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_morph_cpp_CMorph_getReady_FUN_0052b680(CMorph *this_ptr)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
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
; XREF[8]:
;   core_biggs.cpp_CBiggs_setup_FUN_00418680 at 004186d8
;   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 at 0051f73a
;   core_moloch.cpp_CMoloch_process_FUN_00528d20 at 00529345
;   core_moloch.cpp_CMoloch_setup_FUN_00528c70 at 00528cf0
;   core_morph.cpp_FUN_0052bcb0 at 0052c4ab
;   core_passngr.cpp_CPassenger_setup_FUN_00545d30 at 00545dc1
;   core_succubus.cpp_CSuccubus_FUN_005c6b60 at 005c6e24
;   core_vampboss.cpp_CVampireBoss_FUN_005e56c0 at 005e5865
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_0063a443
;   TerminatedCString s_CMorph_getReady_can_t_do_0063a455
;   WatcomTypeInfo g_CBoundingBox3DTypeInfo
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_morph.cpp_FUN_0052b280
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b680
        ;   Label: core_morph.cpp_CMorph_getReady_FUN_0052b680
    PUSH ESI                            ; 0052b681
    PUSH EDI                            ; 0052b682
    PUSH EBP                            ; 0052b683
    SUB ESP,0xb8                        ; 0052b684
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0052b68a
    CMP dword ptr [EAX + 0x54],0x3      ; 0052b691
    JL 0x0052b74f                       ; 0052b695
        ;   XREF to: 0052b74f (CONDITIONAL_JUMP)  ; LAB_0052b74f
    CMP dword ptr [EAX + 0x65c],0x3     ; 0052b69b
    JL 0x0052b74f                       ; 0052b6a2
        ;   XREF to: 0052b74f (CONDITIONAL_JUMP)  ; LAB_0052b74f
    PUSH 0x659900                       ; 0052b6a8 | g_CBoundingBox3DTypeInfo
        ;   Label: LAB_0052b6a8
    PUSH 0x2                            ; 0052b6ad
    LEA EAX,[ESP + 0x8]                 ; 0052b6af
    PUSH EAX                            ; 0052b6b3
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0052b6b4
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0052b6b9
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0052b6bc
    XOR EDI,EDI                         ; 0052b6c3
    MOV dword ptr [ESP + 0x90],EAX      ; 0052b6c5
    MOV EAX,ESP                         ; 0052b6cc
    MOV dword ptr [ESP + 0x9c],EDI      ; 0052b6ce
    MOV dword ptr [ESP + 0xa4],EAX      ; 0052b6d5
    MOV EAX,dword ptr [ESP + 0x90]      ; 0052b6dc
        ;   Label: LAB_0052b6dc
    MOV EAX,dword ptr [EAX + 0x58]      ; 0052b6e3
    ADD EAX,0x4                         ; 0052b6e6
    MOV EBX,dword ptr [ESP + 0xa4]      ; 0052b6e9
    MOV EDX,EAX                         ; 0052b6f0
    CMP EAX,EBX                         ; 0052b6f2
    JZ 0x0052b706                       ; 0052b6f4
        ;   XREF to: 0052b706 (CONDITIONAL_JUMP)  ; LAB_0052b706
    MOV ECX,dword ptr [EAX]             ; 0052b6f6
    MOV dword ptr [EBX],ECX             ; 0052b6f8
    MOV ECX,dword ptr [EAX + 0x4]       ; 0052b6fa
    MOV dword ptr [EBX + 0x4],ECX       ; 0052b6fd
    MOV ECX,dword ptr [EAX + 0x8]       ; 0052b700
    MOV dword ptr [EBX + 0x8],ECX       ; 0052b703
    LEA EAX,[EBX + 0xc]                 ; 0052b706
        ;   Label: LAB_0052b706
    CMP EAX,EDX                         ; 0052b709
    JNZ 0x0052bac3                      ; 0052b70b
        ;   XREF to: 0052bac3 (CONDITIONAL_JUMP)  ; LAB_0052bac3
    MOV EDI,dword ptr [ESP + 0xa4]      ; 0052b711
        ;   Label: LAB_0052b711
    MOV EBP,dword ptr [ESP + 0x9c]      ; 0052b718
    MOV EBX,0x10                        ; 0052b71f
    MOV ESI,0x1                         ; 0052b724
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0052b729
        ;   Label: LAB_0052b729
    ADD EAX,EBP                         ; 0052b730
    CMP ESI,dword ptr [EAX + 0x54]      ; 0052b732
    JGE 0x0052b777                      ; 0052b735
        ;   XREF to: 0052b777 (CONDITIONAL_JUMP)  ; LAB_0052b777
    MOV EAX,dword ptr [EAX + 0x58]      ; 0052b737
    ADD EAX,EBX                         ; 0052b73a
    ADD EAX,0x4                         ; 0052b73c
    PUSH EAX                            ; 0052b73f
    PUSH EDI                            ; 0052b740
    INC ESI                             ; 0052b741
    ADD EBX,0x10                        ; 0052b742
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 0052b745
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0052b74a
    JMP 0x0052b729                      ; 0052b74d
        ;   XREF to: 0052b729 (UNCONDITIONAL_JUMP)  ; LAB_0052b729
    MOV EBX,0x63a443                    ; 0052b74f | = "..\\core\\morph.cpp"
        ;   Label: LAB_0052b74f
    MOV ESI,0x31f                       ; 0052b754
    PUSH 0x63a455                       ; 0052b759 | = "CMorph::getReady - can't do this unle..."
    MOV dword ptr [0x02f0ca48],EBX      ; 0052b75e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0052b764 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052b76a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0052b76f
    JMP 0x0052b6a8                      ; 0052b772
        ;   XREF to: 0052b6a8 (UNCONDITIONAL_JUMP)  ; LAB_0052b6a8
    MOV EBX,dword ptr [ESP + 0x9c]      ; 0052b777
        ;   Label: LAB_0052b777
    MOV ESI,dword ptr [ESP + 0xa4]      ; 0052b77e
    MOV ECX,dword ptr [ESP + 0x90]      ; 0052b785
    ADD EBX,0x608                       ; 0052b78c
    ADD ESI,0x18                        ; 0052b792
    ADD ECX,0x608                       ; 0052b795
    MOV dword ptr [ESP + 0x9c],EBX      ; 0052b79b
    MOV dword ptr [ESP + 0xa4],ESI      ; 0052b7a2
    MOV dword ptr [ESP + 0x90],ECX      ; 0052b7a9
    CMP EBX,0xc10                       ; 0052b7b0
    JNZ 0x0052b6dc                      ; 0052b7b6
        ;   XREF to: 0052b6dc (CONDITIONAL_JUMP)  ; LAB_0052b6dc
    MOV EAX,ESP                         ; 0052b7bc
    ADD EAX,0xc                         ; 0052b7be
    MOV dword ptr [ESP + 0xa8],EAX      ; 0052b7c1
    MOV EAX,ESP                         ; 0052b7c8
    ADD EAX,0x24                        ; 0052b7ca
    MOV dword ptr [ESP + 0xac],EAX      ; 0052b7cd
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0052b7d4
    ADD EAX,0x608                       ; 0052b7db
    XOR EBP,EBP                         ; 0052b7e0
    MOV dword ptr [ESP + 0x94],EAX      ; 0052b7e2
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0052b7e9
    MOV dword ptr [ESP + 0xa0],EBP      ; 0052b7f0
    MOV dword ptr [ESP + 0x98],EAX      ; 0052b7f7
    IMUL EDX,dword ptr [ESP + 0xa0],0x18 ; 0052b7fe
        ;   Label: LAB_0052b7fe
    MOV EAX,dword ptr [ESP + 0x98]      ; 0052b806
    MOV ESI,0x1                         ; 0052b80d
    MOV dword ptr [ESP + 0xb4],EAX      ; 0052b812
    SUB ESI,dword ptr [ESP + 0xa0]      ; 0052b819
    IMUL ESI,ESI,0x18                   ; 0052b820
    MOV EAX,dword ptr [ESP + 0x94]      ; 0052b823
    MOV dword ptr [ESP + 0xb0],EAX      ; 0052b82a
    MOV EAX,ESP                         ; 0052b831
    ADD ESI,EAX                         ; 0052b833
    MOV EAX,dword ptr [ESP + 0xac]      ; 0052b835
    FLD float ptr [EAX]                 ; 0052b83c
    FSUB float ptr [ESI]                ; 0052b83e
    FSTP float ptr [ESP + 0x3c]         ; 0052b840
    FLD float ptr [EAX + 0x4]           ; 0052b844
    FSUB float ptr [ESI + 0x4]          ; 0052b847
    FSTP float ptr [ESP + 0x40]         ; 0052b84a
    FLD float ptr [EAX + 0x8]           ; 0052b84e
    MOV EAX,ESP                         ; 0052b851
    FSUB float ptr [ESI + 0x8]          ; 0052b853
    ADD EAX,EDX                         ; 0052b856
    MOV EDX,dword ptr [ESP + 0xa8]      ; 0052b858
    FSTP float ptr [ESP + 0x44]         ; 0052b85f
    FLD float ptr [EDX]                 ; 0052b863
    FSUB float ptr [EAX]                ; 0052b865
    FLD float ptr [ESP + 0x3c]          ; 0052b867
    FXCH                                ; 0052b86b
    FSTP float ptr [ESP + 0x6c]         ; 0052b86d
    FDIV float ptr [ESP + 0x6c]         ; 0052b871
    FLD float ptr [EDX + 0x4]           ; 0052b875
    FSUB float ptr [EAX + 0x4]          ; 0052b878
    FSTP float ptr [ESP + 0x70]         ; 0052b87b
    FLD float ptr [EDX + 0x8]           ; 0052b87f
    FSUB float ptr [EAX + 0x8]          ; 0052b882
    MOV EDX,dword ptr [ESP + 0xac]      ; 0052b885
    FSTP float ptr [ESP + 0x74]         ; 0052b88c
    FSTP float ptr [ESP + 0x60]         ; 0052b890
    FLD float ptr [EDX]                 ; 0052b894
    FSUB float ptr [ESI]                ; 0052b896
    FSTP float ptr [ESP + 0x84]         ; 0052b898
    FLD float ptr [EDX + 0x4]           ; 0052b89f
    FSUB float ptr [ESI + 0x4]          ; 0052b8a2
    FSTP float ptr [ESP + 0x88]         ; 0052b8a5
    FLD float ptr [EDX + 0x8]           ; 0052b8ac
    FSUB float ptr [ESI + 0x8]          ; 0052b8af
    MOV EDX,dword ptr [ESP + 0xa8]      ; 0052b8b2
    FSTP float ptr [ESP + 0x8c]         ; 0052b8b9
    FLD float ptr [EDX]                 ; 0052b8c0
    FSUB float ptr [EAX]                ; 0052b8c2
    FSTP float ptr [ESP + 0x54]         ; 0052b8c4
    FLD float ptr [EDX + 0x4]           ; 0052b8c8
    FSUB float ptr [EAX + 0x4]          ; 0052b8cb
    FLD float ptr [ESP + 0x88]          ; 0052b8ce
    FXCH                                ; 0052b8d5
    FSTP float ptr [ESP + 0x58]         ; 0052b8d7
    FDIV float ptr [ESP + 0x58]         ; 0052b8db
    FLD float ptr [EDX + 0x8]           ; 0052b8df
    FSUB float ptr [EAX + 0x8]          ; 0052b8e2
    MOV EDX,dword ptr [ESP + 0xac]      ; 0052b8e5
    FSTP float ptr [ESP + 0x5c]         ; 0052b8ec
    FSTP float ptr [ESP + 0x64]         ; 0052b8f0
    FLD float ptr [EDX]                 ; 0052b8f4
    FSUB float ptr [ESI]                ; 0052b8f6
    FSTP float ptr [ESP + 0x30]         ; 0052b8f8
    FLD float ptr [EDX + 0x4]           ; 0052b8fc
    FSUB float ptr [ESI + 0x4]          ; 0052b8ff
    FSTP float ptr [ESP + 0x34]         ; 0052b902
    FLD float ptr [EDX + 0x8]           ; 0052b906
    FSUB float ptr [ESI + 0x8]          ; 0052b909
    MOV EDX,dword ptr [ESP + 0xa8]      ; 0052b90c
    FSTP float ptr [ESP + 0x38]         ; 0052b913
    FLD float ptr [EDX]                 ; 0052b917
    FSUB float ptr [EAX]                ; 0052b919
    FSTP float ptr [ESP + 0x48]         ; 0052b91b
    FLD float ptr [EDX + 0x4]           ; 0052b91f
    FSUB float ptr [EAX + 0x4]          ; 0052b922
    FSTP float ptr [ESP + 0x4c]         ; 0052b925
    FLD float ptr [EDX + 0x8]           ; 0052b929
    FSUB float ptr [EAX + 0x8]          ; 0052b92c
    FLD float ptr [ESP + 0x38]          ; 0052b92f
    FXCH                                ; 0052b933
    FSTP float ptr [ESP + 0x50]         ; 0052b935
    FDIV float ptr [ESP + 0x50]         ; 0052b939
    MOV EDX,dword ptr [ESP + 0x98]      ; 0052b93d
    FSTP float ptr [ESP + 0x68]         ; 0052b944
    MOV EBX,dword ptr [EDX + 0x54]      ; 0052b948
    XOR EDI,EDI                         ; 0052b94b
    TEST EBX,EBX                        ; 0052b94d
    JLE 0x0052ba3b                      ; 0052b94f
        ;   XREF to: 0052ba3b (CONDITIONAL_JUMP)  ; LAB_0052ba3b
    MOV EBP,EAX                         ; 0052b955
    XOR EBX,EBX                         ; 0052b957
    MOV EDX,dword ptr [ESP + 0xb4]      ; 0052b959
        ;   Label: LAB_0052b959
    MOV EDX,dword ptr [EDX + 0x58]      ; 0052b960
    ADD EDX,EBX                         ; 0052b963
    MOV EAX,dword ptr [EDX + 0x4]       ; 0052b965
    ADD EDX,0x4                         ; 0052b968
    MOV dword ptr [ESP + 0x78],EAX      ; 0052b96b
    LEA EAX,[EDX + 0x4]                 ; 0052b96f
    MOV EAX,dword ptr [EAX]             ; 0052b972
    MOV dword ptr [ESP + 0x7c],EAX      ; 0052b974
    LEA EAX,[EDX + 0x8]                 ; 0052b978
    MOV EAX,dword ptr [EAX]             ; 0052b97b
    MOV dword ptr [ESP + 0x80],EAX      ; 0052b97d
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0052b984
    CMP dword ptr [EAX + 0xc28],0x0     ; 0052b98b
    JZ 0x0052ba03                       ; 0052b992
        ;   XREF to: 0052ba03 (CONDITIONAL_JUMP)  ; LAB_0052ba03
    FLD float ptr [ESP + 0x78]          ; 0052b994
    FSUB float ptr [EBP]                ; 0052b998
    FST float ptr [ESP + 0x78]          ; 0052b99b
    FMUL float ptr [ESP + 0x60]         ; 0052b99f
    FLD float ptr [ESP + 0x7c]          ; 0052b9a3
    FSUB float ptr [EBP + 0x4]          ; 0052b9a7
    FLD float ptr [ESP + 0x80]          ; 0052b9aa
    FXCH                                ; 0052b9b1
    FST float ptr [ESP + 0x7c]          ; 0052b9b3
    FXCH                                ; 0052b9b7
    FSUB float ptr [EBP + 0x8]          ; 0052b9b9
    FXCH                                ; 0052b9bc
    FMUL float ptr [ESP + 0x64]         ; 0052b9be
    FXCH                                ; 0052b9c2
    FMUL float ptr [ESP + 0x68]         ; 0052b9c4
    FXCH ST2                            ; 0052b9c8
    FST float ptr [ESP + 0x78]          ; 0052b9ca
    FXCH                                ; 0052b9ce
    FSTP float ptr [ESP + 0x7c]         ; 0052b9d0
    FXCH                                ; 0052b9d4
    FSTP float ptr [ESP + 0x80]         ; 0052b9d6
    FADD float ptr [ESI]                ; 0052b9dd
    FLD float ptr [ESP + 0x7c]          ; 0052b9df
    FXCH                                ; 0052b9e3
    FSTP float ptr [ESP + 0x78]         ; 0052b9e5
    FADD float ptr [ESI + 0x4]          ; 0052b9e9
    FLD float ptr [ESP + 0x80]          ; 0052b9ec
    FXCH                                ; 0052b9f3
    FSTP float ptr [ESP + 0x7c]         ; 0052b9f5
    FADD float ptr [ESI + 0x8]          ; 0052b9f9
    FSTP float ptr [ESP + 0x80]         ; 0052b9fc
    LEA EAX,[ESP + 0x78]                ; 0052ba03
        ;   Label: LAB_0052ba03
    PUSH EAX                            ; 0052ba07
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0052ba08
    PUSH EAX                            ; 0052ba0f
    CALL core_morph.cpp_FUN_0052b280    ; 0052ba10
        ;   XREF to: 0052b280 (UNCONDITIONAL_CALL)  ; int core_morph.cpp_FUN_0052b280()
    ADD ESP,0x8                         ; 0052ba15
    MOV EDX,dword ptr [ESP + 0xb4]      ; 0052ba18
    MOV EDX,dword ptr [EDX + 0x58]      ; 0052ba1f
    MOV dword ptr [EDX + EBX*0x1],EAX   ; 0052ba22
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0052ba25
    INC EDI                             ; 0052ba2c
    MOV EDX,dword ptr [EAX + 0x54]      ; 0052ba2d
    ADD EBX,0x10                        ; 0052ba30
    CMP EDI,EDX                         ; 0052ba33
    JL 0x0052b959                       ; 0052ba35
        ;   XREF to: 0052b959 (CONDITIONAL_JUMP)  ; LAB_0052b959
    MOV EBX,dword ptr [ESP + 0xac]      ; 0052ba3b
        ;   Label: LAB_0052ba3b
    MOV ESI,dword ptr [ESP + 0x94]      ; 0052ba42
    MOV EDI,dword ptr [ESP + 0x98]      ; 0052ba49
    MOV EBP,dword ptr [ESP + 0xa0]      ; 0052ba50
    MOV ECX,dword ptr [ESP + 0xa8]      ; 0052ba57
    SUB EBX,0x18                        ; 0052ba5e
    SUB ESI,0x608                       ; 0052ba61
    ADD EDI,0x608                       ; 0052ba67
    INC EBP                             ; 0052ba6d
    ADD ECX,0x18                        ; 0052ba6e
    MOV dword ptr [ESP + 0xac],EBX      ; 0052ba71
    MOV dword ptr [ESP + 0x94],ESI      ; 0052ba78
    MOV dword ptr [ESP + 0x98],EDI      ; 0052ba7f
    MOV dword ptr [ESP + 0xa0],EBP      ; 0052ba86
    MOV dword ptr [ESP + 0xa8],ECX      ; 0052ba8d
    CMP EBP,0x2                         ; 0052ba94
    JL 0x0052b7fe                       ; 0052ba97
        ;   XREF to: 0052b7fe (CONDITIONAL_JUMP)  ; LAB_0052b7fe
    MOV ECX,dword ptr [ESP + 0xcc]      ; 0052ba9d
    PUSH ECX                            ; 0052baa4
    ADD ESP,0x4                         ; 0052baa5
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0052baa8
    ADD EAX,0x608                       ; 0052baaf
    PUSH EAX                            ; 0052bab4
    ADD ESP,0x4                         ; 0052bab5
    ADD ESP,0xb8                        ; 0052bab8
    POP EBP                             ; 0052babe
    POP EDI                             ; 0052babf
    POP ESI                             ; 0052bac0
    POP EBX                             ; 0052bac1
    RET                                 ; 0052bac2
    MOV ECX,dword ptr [EDX]             ; 0052bac3
        ;   Label: LAB_0052bac3
    MOV dword ptr [EAX],ECX             ; 0052bac5
    MOV ECX,dword ptr [EDX + 0x4]       ; 0052bac7
    MOV dword ptr [EAX + 0x4],ECX       ; 0052baca
    MOV ECX,dword ptr [EDX + 0x8]       ; 0052bacd
    MOV dword ptr [EAX + 0x8],ECX       ; 0052bad0
    JMP 0x0052b711                      ; 0052bad3
        ;   XREF to: 0052b711 (UNCONDITIONAL_JUMP)  ; LAB_0052b711

