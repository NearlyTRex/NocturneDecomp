; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; Local Variables:
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
;   core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_0059c1f0 at 0059c200
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064ed24
;   TerminatedCString s_Bug_0064ed39
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
;   core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d9e0
        ;   Label: core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0
    PUSH ESI                            ; 0059d9e1
    PUSH EDI                            ; 0059d9e2
    PUSH EBP                            ; 0059d9e3
    SUB ESP,0x24                        ; 0059d9e4
    MOV EBP,dword ptr [ESP + 0x38]      ; 0059d9e7
    PUSH EBP                            ; 0059d9eb
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810 ; 0059d9ec
        ;   XREF to: 0059a810 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0059d9f1
    MOV dword ptr [ESP + 0x14],EAX      ; 0059d9f4
    MOV EAX,dword ptr [EAX + 0x28558]   ; 0059d9f8
    XOR ESI,ESI                         ; 0059d9fe
    MOV dword ptr [ESP + 0x20],EAX      ; 0059da00
    TEST EAX,EAX                        ; 0059da04
    JLE 0x0059da40                      ; 0059da06
        ;   XREF to: 0059da40 (CONDITIONAL_JUMP)  ; LAB_0059da40
    LEA EDI,[EBP + 0x814c]              ; 0059da08
    MOV EBX,EBP                         ; 0059da0e
    PUSH EDI                            ; 0059da10
        ;   Label: LAB_0059da10
    CALL core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0 ; 0059da11
        ;   XREF to: 00420fb0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0(CBoundingBox3D * this_ptr)
    ADD EBX,0x4                         ; 0059da16
    INC ESI                             ; 0059da19
    ADD ESP,0x4                         ; 0059da1a
    ADD EDI,0x18                        ; 0059da1d
    MOV ECX,dword ptr [ESP + 0x20]      ; 0059da20
    MOV dword ptr [EBX + 0x8aa8],0x0    ; 0059da24
    CMP ESI,ECX                         ; 0059da2e
    JL 0x0059da10                       ; 0059da30
        ;   XREF to: 0059da10 (CONDITIONAL_JUMP)  ; LAB_0059da10
    LEA EAX,[EAX]                       ; 0059da32
    LEA EDX,[EDX]                       ; 0059da38
    MOV EAX,EAX                         ; 0059da3e
    XOR EBX,EBX                         ; 0059da40
        ;   Label: LAB_0059da40
    MOV ESI,dword ptr [EBP + 0x2c]      ; 0059da42
    MOV dword ptr [ESP + 0x8],EBX       ; 0059da45
    TEST ESI,ESI                        ; 0059da49
    JLE 0x0059da9a                      ; 0059da4b
        ;   XREF to: 0059da9a (CONDITIONAL_JUMP)  ; LAB_0059da9a
    LEA EAX,[EBP + 0x814c]              ; 0059da4d
    MOV dword ptr [ESP + 0x4],EBX       ; 0059da53
    MOV dword ptr [ESP + 0x10],EAX      ; 0059da57
    MOV EDX,dword ptr [ESP + 0x4]       ; 0059da5b
        ;   Label: LAB_0059da5b
    MOV EAX,dword ptr [EBP + 0x40]      ; 0059da5f
    ADD EDX,EAX                         ; 0059da62
    MOV dword ptr [ESP + 0x18],EDX      ; 0059da64
    LEA ESI,[EDX + 0x10]                ; 0059da68
    XOR EDI,EDI                         ; 0059da6b
    MOV EBX,EDX                         ; 0059da6d
    MOV EDX,dword ptr [ESP + 0x18]      ; 0059da6f
        ;   Label: LAB_0059da6f
    XOR EAX,EAX                         ; 0059da73
    MOV AL,byte ptr [EDX]               ; 0059da75
    CMP EDI,EAX                         ; 0059da77
    JL 0x0059daed                       ; 0059da79
        ;   XREF to: 0059daed (CONDITIONAL_JUMP)  ; LAB_0059daed
    MOV EDI,dword ptr [ESP + 0x4]       ; 0059da7f
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059da83
    MOV EDX,dword ptr [EBP + 0x2c]      ; 0059da87
    ADD EDI,0x34                        ; 0059da8a
    INC EAX                             ; 0059da8d
    MOV dword ptr [ESP + 0x4],EDI       ; 0059da8e
    MOV dword ptr [ESP + 0x8],EAX       ; 0059da92
    CMP EAX,EDX                         ; 0059da96
    JL 0x0059da5b                       ; 0059da98
        ;   XREF to: 0059da5b (CONDITIONAL_JUMP)  ; LAB_0059da5b
    XOR ECX,ECX                         ; 0059da9a
        ;   Label: LAB_0059da9a
    MOV EBX,dword ptr [ESP + 0x20]      ; 0059da9c
    MOV dword ptr [ESP + 0x1c],ECX      ; 0059daa0
    TEST EBX,EBX                        ; 0059daa4
    JLE 0x0059dae5                      ; 0059daa6
        ;   XREF to: 0059dae5 (CONDITIONAL_JUMP)  ; LAB_0059dae5
    MOV EAX,dword ptr [ESP + 0x14]      ; 0059daa8
    MOV dword ptr [ESP + 0xc],EBP       ; 0059daac
    MOV dword ptr [ESP],EAX             ; 0059dab0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059dab3
        ;   Label: LAB_0059dab3
    CMP dword ptr [EAX + 0x8aac],0x1    ; 0059dab7
    JZ 0x0059db1e                       ; 0059dabe
        ;   XREF to: 0059db1e (CONDITIONAL_JUMP)  ; LAB_0059db1e
    MOV ECX,dword ptr [ESP]             ; 0059dac0
        ;   Label: LAB_0059dac0
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059dac3
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0059dac7
    MOV EDI,dword ptr [ESP + 0x20]      ; 0059dacb
    ADD ECX,0x24                        ; 0059dacf
    ADD EBX,0x4                         ; 0059dad2
    INC ESI                             ; 0059dad5
    MOV dword ptr [ESP],ECX             ; 0059dad6
    MOV dword ptr [ESP + 0xc],EBX       ; 0059dad9
    MOV dword ptr [ESP + 0x1c],ESI      ; 0059dadd
    CMP ESI,EDI                         ; 0059dae1
    JL 0x0059dab3                       ; 0059dae3
        ;   XREF to: 0059dab3 (CONDITIONAL_JUMP)  ; LAB_0059dab3
    ADD ESP,0x24                        ; 0059dae5
        ;   Label: LAB_0059dae5
    POP EBP                             ; 0059dae8
    POP EDI                             ; 0059dae9
    POP ESI                             ; 0059daea
    POP EBX                             ; 0059daeb
    RET                                 ; 0059daec
    XOR EAX,EAX                         ; 0059daed
        ;   Label: LAB_0059daed
    MOV AL,byte ptr [EBX + 0x1]         ; 0059daef
    IMUL EAX,EAX,0x18                   ; 0059daf2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0059daf5
    PUSH ESI                            ; 0059daf9
    ADD EAX,EDX                         ; 0059dafa
    PUSH EAX                            ; 0059dafc
    INC EBX                             ; 0059dafd
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 0059dafe
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    XOR EAX,EAX                         ; 0059db03
    INC EDI                             ; 0059db05
    MOV AL,byte ptr [EBX]               ; 0059db06
    ADD ESI,0xc                         ; 0059db08
    ADD ESP,0x8                         ; 0059db0b
    MOV dword ptr [EBP + EAX*0x4 + 0x8aac],0x1 ; 0059db0e
    JMP 0x0059da6f                      ; 0059db19
        ;   XREF to: 0059da6f (UNCONDITIONAL_JUMP)  ; LAB_0059da6f
    MOV EAX,dword ptr [ESP]             ; 0059db1e
        ;   Label: LAB_0059db1e
    CMP dword ptr [EAX + 0x2857c],0x0   ; 0059db21
    JL 0x0059db81                       ; 0059db28
        ;   XREF to: 0059db81 (CONDITIONAL_JUMP)  ; LAB_0059db81
    MOV ESI,dword ptr [ESP + 0x20]      ; 0059db2a
    XOR EBX,EBX                         ; 0059db2e
    TEST ESI,ESI                        ; 0059db30
    JLE 0x0059db4f                      ; 0059db32
        ;   XREF to: 0059db4f (CONDITIONAL_JUMP)  ; LAB_0059db4f
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0059db34
    MOV ESI,dword ptr [ESP + 0x14]      ; 0059db38
    MOV EDI,EBP                         ; 0059db3c
    CMP EDX,dword ptr [ESI + 0x2857c]   ; 0059db3e
        ;   Label: LAB_0059db3e
    JNZ 0x0059db94                      ; 0059db44
        ;   XREF to: 0059db94 (CONDITIONAL_JUMP)  ; LAB_0059db94
    CMP dword ptr [EDI + 0x8aac],0x0    ; 0059db46
    JZ 0x0059db94                       ; 0059db4d
        ;   XREF to: 0059db94 (CONDITIONAL_JUMP)  ; LAB_0059db94
    CMP EBX,dword ptr [ESP + 0x20]      ; 0059db4f
        ;   Label: LAB_0059db4f
    JGE 0x0059db81                      ; 0059db53
        ;   XREF to: 0059db81 (CONDITIONAL_JUMP)  ; LAB_0059db81
    MOV EDI,dword ptr [ESP + 0x14]      ; 0059db55
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0059db59
    XOR ESI,ESI                         ; 0059db5d
    IMUL EBX,EBX,0x24                   ; 0059db5f
        ;   Label: LAB_0059db5f
    ADD EBX,EDI                         ; 0059db62
    MOV EBX,dword ptr [EBX + 0x2857c]   ; 0059db64
    TEST EBX,EBX                        ; 0059db6a
    JL 0x0059dbad                       ; 0059db6c
        ;   XREF to: 0059dbad (CONDITIONAL_JUMP)  ; LAB_0059dbad
    CMP dword ptr [EBP + EBX*0x4 + 0x8aac],0x2 ; 0059db6e
        ;   Label: LAB_0059db6e
    JNZ 0x0059dba5                      ; 0059db76
        ;   XREF to: 0059dba5 (CONDITIONAL_JUMP)  ; LAB_0059dba5
    CMP ESI,0x2                         ; 0059db78
        ;   Label: LAB_0059db78
    JL 0x0059dac0                       ; 0059db7b
        ;   XREF to: 0059dac0 (CONDITIONAL_JUMP)  ; LAB_0059dac0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059db81
        ;   Label: LAB_0059db81
    MOV dword ptr [EAX + 0x8aac],0x2    ; 0059db85
    JMP 0x0059dac0                      ; 0059db8f
        ;   XREF to: 0059dac0 (UNCONDITIONAL_JUMP)  ; LAB_0059dac0
    MOV EAX,dword ptr [ESP + 0x20]      ; 0059db94
        ;   Label: LAB_0059db94
    ADD ESI,0x24                        ; 0059db98
    INC EBX                             ; 0059db9b
    ADD EDI,0x4                         ; 0059db9c
    CMP EBX,EAX                         ; 0059db9f
    JL 0x0059db3e                       ; 0059dba1
        ;   XREF to: 0059db3e (CONDITIONAL_JUMP)  ; LAB_0059db3e
    JMP 0x0059db4f                      ; 0059dba3
        ;   XREF to: 0059db4f (UNCONDITIONAL_JUMP)  ; LAB_0059db4f
    INC ESI                             ; 0059dba5
        ;   Label: LAB_0059dba5
    CMP ESI,0x2                         ; 0059dba6
    JL 0x0059db5f                       ; 0059dba9
        ;   XREF to: 0059db5f (CONDITIONAL_JUMP)  ; LAB_0059db5f
    JMP 0x0059db78                      ; 0059dbab
        ;   XREF to: 0059db78 (UNCONDITIONAL_JUMP)  ; LAB_0059db78
    MOV EAX,0x64ed24                    ; 0059dbad | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0059dbad
    MOV EDX,0x86b                       ; 0059dbb2
    PUSH 0x64ed39                       ; 0059dbb7 | = "Bug!"
    MOV [0x02f0ca48],EAX                ; 0059dbbc | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0059dbc1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059dbc7
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0059dbcc
    JMP 0x0059db6e                      ; 0059dbcf
        ;   XREF to: 0059db6e (UNCONDITIONAL_JUMP)  ; LAB_0059db6e

