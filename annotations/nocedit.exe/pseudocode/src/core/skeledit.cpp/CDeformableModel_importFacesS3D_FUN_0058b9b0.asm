; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeledit_cpp_CDeformableModel_importFacesS3D_FUN_0058b9b0(CDeformableModel *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; float            Stack[-0x54]:4  local_54
; undefined1[4]    Stack[-0x50]:4  local_50
; undefined1[4]    Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; undefined1[4]    Stack[-0x44]:4  local_44
; undefined1[4]    Stack[-0x40]:4  local_40
; undefined2[2]    Stack[-0x3c]:4  local_3c
; undefined1[4]    Stack[-0x38]:4  local_38
; undefined1[4]    Stack[-0x34]:4  local_34
; double           Stack[-0x30]:8  local_30
; int              Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_skeledit.cpp_CDeformableModel_buildFromPosFile_FUN_0058c190 at 0058c327
;   core_skeledit.cpp_CDeformableModel_importGeometryS3D_FUN_0058b660 at 0058b874
;
; Referenced Globals:
;   TerminatedCString s_d_d_f_f_d_f_f_d_f_f_0064a8cf
;   double DOUBLE_0064a8f2 = 0.00390625
;   double DOUBLE_0064a8fa = 256
;
; Called Functions:
;   core_skeledit.cpp_CDeformableModel_removeDuplicateFaces_FUN_0058ede0
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    NOP                                 ; 0058b9b0
        ;   Label: core_skeledit.cpp_CDeformableModel_importFacesS3D_FUN_0058b9b0
    NOP                                 ; 0058b9b1
    NOP                                 ; 0058b9b2
    NOP                                 ; 0058b9b3
    NOP                                 ; 0058b9b4
    NOP                                 ; 0058b9b5
    NOP                                 ; 0058b9b6
    NOP                                 ; 0058b9b7
    NOP                                 ; 0058b9b8
    NOP                                 ; 0058b9b9
    PUSH EBX                            ; 0058b9ba
    PUSH ESI                            ; 0058b9bb
    PUSH EDI                            ; 0058b9bc
    PUSH EBP                            ; 0058b9bd
    SUB ESP,0x44                        ; 0058b9be
    MOV EBX,dword ptr [ESP + 0x58]      ; 0058b9c1
    MOV ESI,0x1                         ; 0058b9c5
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0058b9ca
    PUSH EDI                            ; 0058b9ce
        ;   Label: LAB_0058b9ce
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058b9cf
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058b9d4
    TEST EAX,EAX                        ; 0058b9d7
    JL 0x0058b9e5                       ; 0058b9d9
        ;   XREF to: 0058b9e5 (CONDITIONAL_JUMP)  ; LAB_0058b9e5
    CMP EAX,0xa                         ; 0058b9db
    JNZ 0x0058b9ce                      ; 0058b9de
        ;   XREF to: 0058b9ce (CONDITIONAL_JUMP)  ; LAB_0058b9ce
    DEC ESI                             ; 0058b9e0
    TEST ESI,ESI                        ; 0058b9e1
    JG 0x0058b9ce                       ; 0058b9e3
        ;   XREF to: 0058b9ce (CONDITIONAL_JUMP)  ; LAB_0058b9ce
    MOV EDX,dword ptr [EBX + 0x54]      ; 0058b9e5
        ;   Label: LAB_0058b9e5
    XOR ESI,ESI                         ; 0058b9e8
    TEST EDX,EDX                        ; 0058b9ea
    JLE 0x0058bbd4                      ; 0058b9ec
        ;   XREF to: 0058bbd4 (CONDITIONAL_JUMP)  ; LAB_0058bbd4
    XOR EBP,EBP                         ; 0058b9f2
    XOR EDI,EDI                         ; 0058b9f4
    LEA EAX,[ESP + 0x8]                 ; 0058b9f6
        ;   Label: LAB_0058b9f6
    PUSH EAX                            ; 0058b9fa
    LEA EAX,[ESP + 0x18]                ; 0058b9fb
    PUSH EAX                            ; 0058b9ff
    LEA EAX,[ESP + 0x28]                ; 0058ba00
    PUSH EAX                            ; 0058ba04
    LEA EAX,[ESP + 0x10]                ; 0058ba05
    PUSH EAX                            ; 0058ba09
    LEA EAX,[ESP + 0x20]                ; 0058ba0a
    PUSH EAX                            ; 0058ba0e
    LEA EAX,[ESP + 0x30]                ; 0058ba0f
    PUSH EAX                            ; 0058ba13
    LEA EAX,[ESP + 0x18]                ; 0058ba14
    PUSH EAX                            ; 0058ba18
    LEA EAX,[ESP + 0x28]                ; 0058ba19
    PUSH EAX                            ; 0058ba1d
    LEA EAX,[ESP + 0x38]                ; 0058ba1e
    PUSH EAX                            ; 0058ba22
    LEA EAX,[ESP + 0x50]                ; 0058ba23
    PUSH EAX                            ; 0058ba27
    PUSH 0x64a8cf                       ; 0058ba28 | = "%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n"
    MOV EAX,dword ptr [ESP + 0x88]      ; 0058ba2d
    PUSH EAX                            ; 0058ba34
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058ba35
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x30                        ; 0058ba3a
    CMP EAX,0xa                         ; 0058ba3d
    JNZ 0x0058bbec                      ; 0058ba40
        ;   XREF to: 0058bbec (CONDITIONAL_JUMP)  ; LAB_0058bbec
    MOV EAX,dword ptr [ESP + 0xc]       ; 0058ba46
    MOV EDX,0x40800000                  ; 0058ba4a
    MOV dword ptr [ESP + 0x30],EAX      ; 0058ba4f
    MOV dword ptr [ESP + 0x38],EDX      ; 0058ba53
    MOV EAX,dword ptr [ESP]             ; 0058ba57
    MOV EDX,0x4                         ; 0058ba5a
    MOV dword ptr [ESP + 0x3c],EAX      ; 0058ba5f
    FLD float ptr [ESP + EDX*0x1 + 0xc] ; 0058ba63
        ;   Label: LAB_0058ba63
    FCOMP float ptr [ESP + 0x30]        ; 0058ba67
    FNSTSW AX                           ; 0058ba6b
    SAHF                                ; 0058ba6d
    JC 0x0058bbf8                       ; 0058ba6e
        ;   XREF to: 0058bbf8 (CONDITIONAL_JUMP)  ; LAB_0058bbf8
    FLD float ptr [ESP + EDX*0x1]       ; 0058ba74
        ;   Label: LAB_0058ba74
    FCOMP float ptr [ESP + 0x3c]        ; 0058ba77
    FNSTSW AX                           ; 0058ba7b
    SAHF                                ; 0058ba7d
    JNC 0x0058ba87                      ; 0058ba7e
        ;   XREF to: 0058ba87 (CONDITIONAL_JUMP)  ; LAB_0058ba87
    MOV EAX,dword ptr [ESP + EDX*0x1]   ; 0058ba80
    MOV dword ptr [ESP + 0x3c],EAX      ; 0058ba83
    ADD EDX,0x4                         ; 0058ba87
        ;   Label: LAB_0058ba87
    CMP EDX,0xc                         ; 0058ba8a
    JNZ 0x0058ba63                      ; 0058ba8d
        ;   XREF to: 0058ba63 (CONDITIONAL_JUMP)  ; LAB_0058ba63
    FLD float ptr [ESP + 0x30]          ; 0058ba8f
    FADD float ptr [ESP + 0x38]         ; 0058ba93
    FMUL double ptr [0x0064a8f2]        ; 0058ba97 | DOUBLE_0064a8f2
    SUB ESP,0x8                         ; 0058ba9d
    FSTP double ptr [ESP]               ; 0058baa0
    CALL crt_math.c_floor_FUN_005feb90  ; 0058baa3
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 0058baa8
    MOV dword ptr [ESP + 0x30],EDX      ; 0058baac
    FLD double ptr [ESP + 0x2c]         ; 0058bab0
    ADD ESP,0x8                         ; 0058bab4
    FLD float ptr [ESP + 0x3c]          ; 0058bab7
    FADD float ptr [ESP + 0x38]         ; 0058babb
    FXCH                                ; 0058babf
    FMUL double ptr [0x0064a8fa]        ; 0058bac1 | DOUBLE_0064a8fa
    FXCH                                ; 0058bac7
    FMUL double ptr [0x0064a8f2]        ; 0058bac9 | DOUBLE_0064a8f2
    FXCH                                ; 0058bacf
    FSTP float ptr [ESP + 0x30]         ; 0058bad1
    SUB ESP,0x8                         ; 0058bad5
    FSTP double ptr [ESP]               ; 0058bad8
    CALL crt_math.c_floor_FUN_005feb90  ; 0058badb
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 0058bae0
    MOV dword ptr [ESP + 0x30],EDX      ; 0058bae4
    FLD double ptr [ESP + 0x2c]         ; 0058bae8
    ADD ESP,0x8                         ; 0058baec
    FMUL double ptr [0x0064a8fa]        ; 0058baef | DOUBLE_0064a8fa
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0058baf5
    FSTP float ptr [ESP + 0x3c]         ; 0058baf9
    TEST ECX,ECX                        ; 0058bafd
    JL 0x0058bc05                       ; 0058baff
        ;   XREF to: 0058bc05 (CONDITIONAL_JUMP)  ; LAB_0058bc05
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0058bb05
        ;   Label: LAB_0058bb05
    CMP EAX,dword ptr [EBX + 0xbc]      ; 0058bb09
    JGE 0x0058bc10                      ; 0058bb0f
        ;   XREF to: 0058bc10 (CONDITIONAL_JUMP)  ; LAB_0058bc10
    MOV EAX,dword ptr [EBX + 0x7c]      ; 0058bb15
        ;   Label: LAB_0058bb15
    LEA ECX,[EAX + EDI*0x1]             ; 0058bb18
    MOV EAX,dword ptr [EBX + 0x90]      ; 0058bb1b
    LEA EDX,[EAX + EBP*0x1]             ; 0058bb21
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0058bb24
    MOV dword ptr [EDX],EAX             ; 0058bb28
    XOR EDX,EDX                         ; 0058bb2a
    MOV AX,word ptr [ESP + EDX*0x1 + 0x18] ; 0058bb2c
        ;   Label: LAB_0058bb2c
    MOV word ptr [ECX],AX               ; 0058bb31
    FLD float ptr [ESP + EDX*0x1]       ; 0058bb34
    FLD float ptr [ESP + EDX*0x1 + 0xc] ; 0058bb37
    FSUB float ptr [ESP + 0x30]         ; 0058bb3b
    FXCH                                ; 0058bb3f
    FSUB float ptr [ESP + 0x3c]         ; 0058bb41
    FXCH                                ; 0058bb45
    FLD double ptr [0x0064a8fa]         ; 0058bb47 | DOUBLE_0064a8fa
    FXCH                                ; 0058bb4d
    FMUL ST1                            ; 0058bb4f
    FXCH ST2                            ; 0058bb51
    FMULP                               ; 0058bb53
    FXCH                                ; 0058bb55
    CALL crt_math.c_round_FUN_005fe6b0  ; 0058bb57
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0058bb5c
    CALL crt_math.c_round_FUN_005fe6b0  ; 0058bb5e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0058bb63
    FISTP dword ptr [ESP + 0x34]        ; 0058bb65
    MOV EAX,dword ptr [ESP + 0x34]      ; 0058bb69
    FISTP dword ptr [ESP + 0x40]        ; 0058bb6d
    TEST EAX,EAX                        ; 0058bb71
    JL 0x0058bc1b                       ; 0058bb73
        ;   XREF to: 0058bc1b (CONDITIONAL_JUMP)  ; LAB_0058bc1b
    CMP EAX,0xffff                      ; 0058bb79
    JLE 0x0058bb88                      ; 0058bb7e
        ;   XREF to: 0058bb88 (CONDITIONAL_JUMP)  ; LAB_0058bb88
    MOV dword ptr [ESP + 0x34],0xffff   ; 0058bb80
    MOV EAX,dword ptr [ESP + 0x40]      ; 0058bb88
        ;   Label: LAB_0058bb88
    TEST EAX,EAX                        ; 0058bb8c
    JL 0x0058bc26                       ; 0058bb8e
        ;   XREF to: 0058bc26 (CONDITIONAL_JUMP)  ; LAB_0058bc26
    CMP EAX,0xffff                      ; 0058bb94
    JLE 0x0058bba3                      ; 0058bb99
        ;   XREF to: 0058bba3 (CONDITIONAL_JUMP)  ; LAB_0058bba3
    MOV dword ptr [ESP + 0x40],0xffff   ; 0058bb9b
    ADD ECX,0x2                         ; 0058bba3
        ;   Label: LAB_0058bba3
    MOV EAX,dword ptr [ESP + 0x34]      ; 0058bba6
    MOV word ptr [ECX + 0x4],AX         ; 0058bbaa
    MOV EAX,dword ptr [ESP + 0x40]      ; 0058bbae
    ADD EDX,0x4                         ; 0058bbb2
    MOV word ptr [ECX + 0xa],AX         ; 0058bbb5
    CMP EDX,0xc                         ; 0058bbb9
    JNZ 0x0058bb2c                      ; 0058bbbc
        ;   XREF to: 0058bb2c (CONDITIONAL_JUMP)  ; LAB_0058bb2c
    ADD EBP,0x4                         ; 0058bbc2
    INC ESI                             ; 0058bbc5
    MOV ECX,dword ptr [EBX + 0x54]      ; 0058bbc6
    ADD EDI,0x12                        ; 0058bbc9
    CMP ESI,ECX                         ; 0058bbcc
    JL 0x0058b9f6                       ; 0058bbce
        ;   XREF to: 0058b9f6 (CONDITIONAL_JUMP)  ; LAB_0058b9f6
    PUSH EBX                            ; 0058bbd4
        ;   Label: LAB_0058bbd4
    CALL core_skeledit.cpp_CDeformableModel_removeDuplicateFaces_FUN_0058ede0 ; 0058bbd5
        ;   XREF to: 0058ede0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CDeformableModel_removeDuplicateFaces_FUN_0058ede0(CDeformableModel * this_ptr)
    MOV EDX,0x1                         ; 0058bbda
    ADD ESP,0x4                         ; 0058bbdf
    MOV EAX,EDX                         ; 0058bbe2
    ADD ESP,0x44                        ; 0058bbe4
    POP EBP                             ; 0058bbe7
    POP EDI                             ; 0058bbe8
    POP ESI                             ; 0058bbe9
    POP EBX                             ; 0058bbea
    RET                                 ; 0058bbeb
    XOR EDX,EDX                         ; 0058bbec
        ;   Label: LAB_0058bbec
    MOV EAX,EDX                         ; 0058bbee
    ADD ESP,0x44                        ; 0058bbf0
    POP EBP                             ; 0058bbf3
    POP EDI                             ; 0058bbf4
    POP ESI                             ; 0058bbf5
    POP EBX                             ; 0058bbf6
    RET                                 ; 0058bbf7
    MOV EAX,dword ptr [ESP + EDX*0x1 + 0xc] ; 0058bbf8
        ;   Label: LAB_0058bbf8
    MOV dword ptr [ESP + 0x30],EAX      ; 0058bbfc
    JMP 0x0058ba74                      ; 0058bc00
        ;   XREF to: 0058ba74 (UNCONDITIONAL_JUMP)  ; LAB_0058ba74
    XOR EAX,EAX                         ; 0058bc05
        ;   Label: LAB_0058bc05
    MOV dword ptr [ESP + 0x2c],EAX      ; 0058bc07
    JMP 0x0058bb05                      ; 0058bc0b
        ;   XREF to: 0058bb05 (UNCONDITIONAL_JUMP)  ; LAB_0058bb05
    XOR ECX,ECX                         ; 0058bc10
        ;   Label: LAB_0058bc10
    MOV dword ptr [ESP + 0x2c],ECX      ; 0058bc12
    JMP 0x0058bb15                      ; 0058bc16
        ;   XREF to: 0058bb15 (UNCONDITIONAL_JUMP)  ; LAB_0058bb15
    XOR EAX,EAX                         ; 0058bc1b
        ;   Label: LAB_0058bc1b
    MOV dword ptr [ESP + 0x34],EAX      ; 0058bc1d
    JMP 0x0058bb88                      ; 0058bc21
        ;   XREF to: 0058bb88 (UNCONDITIONAL_JUMP)  ; LAB_0058bb88
    XOR EAX,EAX                         ; 0058bc26
        ;   Label: LAB_0058bc26
    MOV dword ptr [ESP + 0x40],EAX      ; 0058bc28
    JMP 0x0058bba3                      ; 0058bc2c
        ;   XREF to: 0058bba3 (UNCONDITIONAL_JUMP)  ; LAB_0058bba3

