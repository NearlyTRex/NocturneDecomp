; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_00566fd0(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_FUN_00565730 at 00565740
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420500
;   core_box.cpp_CBoundingBox3D_reset_FUN_00421570
;   core_skeleton.cpp_FUN_00563c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566fd0
        ;   Label: core_skeleton.cpp_FUN_00566fd0
    PUSH ESI                            ; 00566fd1
    PUSH EDI                            ; 00566fd2
    PUSH EBP                            ; 00566fd3
    SUB ESP,0x1c                        ; 00566fd4
    MOV EBP,dword ptr [ESP + 0x30]      ; 00566fd7
    PUSH EBP                            ; 00566fdb
    CALL core_skeleton.cpp_FUN_00563c40 ; 00566fdc
        ;   XREF to: 00563c40 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_FUN_00563c40(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 00566fe1
    MOV dword ptr [ESP + 0x10],EAX      ; 00566fe4
    MOV EAX,dword ptr [EAX + 0x1de78]   ; 00566fe8
    XOR EBX,EBX                         ; 00566fee
    MOV dword ptr [ESP + 0x18],EAX      ; 00566ff0
    TEST EAX,EAX                        ; 00566ff4
    JLE 0x00567030                      ; 00566ff6
        ;   XREF to: 00567030 (CONDITIONAL_JUMP)  ; LAB_00567030
    LEA EDI,[EBP + 0x274c]              ; 00566ff8
    MOV ESI,EBP                         ; 00566ffe
    PUSH EDI                            ; 00567000
        ;   Label: LAB_00567000
    CALL core_box.cpp_CBoundingBox3D_reset_FUN_00421570 ; 00567001
        ;   XREF to: 00421570 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_reset_FUN_00421570(CBoundingBox3D * this_ptr)
    ADD ESI,0x4                         ; 00567006
    INC EBX                             ; 00567009
    ADD ESP,0x4                         ; 0056700a
    ADD EDI,0x18                        ; 0056700d
    MOV ECX,dword ptr [ESP + 0x18]      ; 00567010
    MOV dword ptr [ESI + 0x30a8],0x0    ; 00567014
    CMP EBX,ECX                         ; 0056701e
    JL 0x00567000                       ; 00567020
        ;   XREF to: 00567000 (CONDITIONAL_JUMP)  ; LAB_00567000
    LEA EAX,[EAX]                       ; 00567022
    LEA EDX,[EDX]                       ; 00567028
    MOV EAX,EAX                         ; 0056702e
    XOR EBX,EBX                         ; 00567030
        ;   Label: LAB_00567030
    MOV ESI,dword ptr [EBP + 0x2c]      ; 00567032
    MOV dword ptr [ESP + 0x8],EBX       ; 00567035
    TEST ESI,ESI                        ; 00567039
    JLE 0x00567086                      ; 0056703b
        ;   XREF to: 00567086 (CONDITIONAL_JUMP)  ; LAB_00567086
    LEA EAX,[EBP + 0x274c]              ; 0056703d
    MOV dword ptr [ESP + 0x4],EBX       ; 00567043
    MOV dword ptr [ESP + 0xc],EAX       ; 00567047
    MOV EDX,dword ptr [ESP + 0x4]       ; 0056704b
        ;   Label: LAB_0056704b
    MOV EAX,dword ptr [EBP + 0x40]      ; 0056704f
    ADD EDX,EAX                         ; 00567052
    MOV dword ptr [ESP + 0x14],EDX      ; 00567054
    LEA EDI,[EDX + 0x10]                ; 00567058
    XOR ESI,ESI                         ; 0056705b
    MOV EBX,EDX                         ; 0056705d
    MOV EDX,dword ptr [ESP + 0x14]      ; 0056705f
        ;   Label: LAB_0056705f
    XOR EAX,EAX                         ; 00567063
    MOV AL,byte ptr [EDX]               ; 00567065
    CMP ESI,EAX                         ; 00567067
    JL 0x005670bf                       ; 00567069
        ;   XREF to: 005670bf (CONDITIONAL_JUMP)  ; LAB_005670bf
    MOV EDI,dword ptr [ESP + 0x4]       ; 0056706b
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056706f
    MOV EDX,dword ptr [EBP + 0x2c]      ; 00567073
    ADD EDI,0x34                        ; 00567076
    INC EAX                             ; 00567079
    MOV dword ptr [ESP + 0x4],EDI       ; 0056707a
    MOV dword ptr [ESP + 0x8],EAX       ; 0056707e
    CMP EAX,EDX                         ; 00567082
    JL 0x0056704b                       ; 00567084
        ;   XREF to: 0056704b (CONDITIONAL_JUMP)  ; LAB_0056704b
    MOV ECX,dword ptr [ESP + 0x18]      ; 00567086
        ;   Label: LAB_00567086
    XOR EDI,EDI                         ; 0056708a
    TEST ECX,ECX                        ; 0056708c
    JLE 0x005670b7                      ; 0056708e
        ;   XREF to: 005670b7 (CONDITIONAL_JUMP)  ; LAB_005670b7
    MOV EAX,dword ptr [ESP + 0x10]      ; 00567090
    MOV EDX,EBP                         ; 00567094
    MOV dword ptr [ESP],EAX             ; 00567096
    CMP dword ptr [EDX + 0x30ac],0x1    ; 00567099
        ;   Label: LAB_00567099
    JZ 0x005670f0                       ; 005670a0
        ;   XREF to: 005670f0 (CONDITIONAL_JUMP)  ; LAB_005670f0
    MOV ECX,dword ptr [ESP]             ; 005670a2
        ;   Label: LAB_005670a2
    MOV EBX,dword ptr [ESP + 0x18]      ; 005670a5
    ADD EDX,0x4                         ; 005670a9
    ADD ECX,0x24                        ; 005670ac
    INC EDI                             ; 005670af
    MOV dword ptr [ESP],ECX             ; 005670b0
    CMP EDI,EBX                         ; 005670b3
    JL 0x00567099                       ; 005670b5
        ;   XREF to: 00567099 (CONDITIONAL_JUMP)  ; LAB_00567099
    ADD ESP,0x1c                        ; 005670b7
        ;   Label: LAB_005670b7
    POP EBP                             ; 005670ba
    POP EDI                             ; 005670bb
    POP ESI                             ; 005670bc
    POP EBX                             ; 005670bd
    RET                                 ; 005670be
    XOR EAX,EAX                         ; 005670bf
        ;   Label: LAB_005670bf
    MOV AL,byte ptr [EBX + 0x1]         ; 005670c1
    IMUL EAX,EAX,0x18                   ; 005670c4
    MOV EDX,dword ptr [ESP + 0xc]       ; 005670c7
    PUSH EDI                            ; 005670cb
    ADD EAX,EDX                         ; 005670cc
    PUSH EAX                            ; 005670ce
    INC EBX                             ; 005670cf
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420500 ; 005670d0
        ;   XREF to: 00420500 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D * this_ptr, CVector3f * point)
    XOR EAX,EAX                         ; 005670d5
    INC ESI                             ; 005670d7
    MOV AL,byte ptr [EBX]               ; 005670d8
    ADD EDI,0xc                         ; 005670da
    ADD ESP,0x8                         ; 005670dd
    MOV dword ptr [EBP + EAX*0x4 + 0x30ac],0x1 ; 005670e0
    JMP 0x0056705f                      ; 005670eb
        ;   XREF to: 0056705f (UNCONDITIONAL_JUMP)  ; LAB_0056705f
    MOV EAX,dword ptr [ESP]             ; 005670f0
        ;   Label: LAB_005670f0
    CMP dword ptr [EAX + 0x1de9c],0x0   ; 005670f3
    JL 0x0056714d                       ; 005670fa
        ;   XREF to: 0056714d (CONDITIONAL_JUMP)  ; LAB_0056714d
    MOV EBX,dword ptr [ESP + 0x18]      ; 005670fc
    XOR EAX,EAX                         ; 00567100
    TEST EBX,EBX                        ; 00567102
    JLE 0x0056711d                      ; 00567104
        ;   XREF to: 0056711d (CONDITIONAL_JUMP)  ; LAB_0056711d
    MOV EBX,dword ptr [ESP + 0x10]      ; 00567106
    MOV ESI,EBP                         ; 0056710a
    CMP EDI,dword ptr [EBX + 0x1de9c]   ; 0056710c
        ;   Label: LAB_0056710c
    JNZ 0x0056715c                      ; 00567112
        ;   XREF to: 0056715c (CONDITIONAL_JUMP)  ; LAB_0056715c
    CMP dword ptr [ESI + 0x30ac],0x0    ; 00567114
    JZ 0x0056715c                       ; 0056711b
        ;   XREF to: 0056715c (CONDITIONAL_JUMP)  ; LAB_0056715c
    CMP EAX,dword ptr [ESP + 0x18]      ; 0056711d
        ;   Label: LAB_0056711d
    JGE 0x0056714d                      ; 00567121
        ;   XREF to: 0056714d (CONDITIONAL_JUMP)  ; LAB_0056714d
    MOV ESI,dword ptr [ESP + 0x10]      ; 00567123
    MOV EAX,EDI                         ; 00567127
    XOR EBX,EBX                         ; 00567129
    IMUL EAX,EAX,0x24                   ; 0056712b
        ;   Label: LAB_0056712b
    ADD EAX,ESI                         ; 0056712e
    MOV EAX,dword ptr [EAX + 0x1de9c]   ; 00567130
    TEST EAX,EAX                        ; 00567136
    JL 0x00567144                       ; 00567138
        ;   XREF to: 00567144 (CONDITIONAL_JUMP)  ; LAB_00567144
    CMP dword ptr [EBP + EAX*0x4 + 0x30ac],0x2 ; 0056713a
    JNZ 0x0056716d                      ; 00567142
        ;   XREF to: 0056716d (CONDITIONAL_JUMP)  ; LAB_0056716d
    CMP EBX,0x2                         ; 00567144
        ;   Label: LAB_00567144
    JL 0x005670a2                       ; 00567147
        ;   XREF to: 005670a2 (CONDITIONAL_JUMP)  ; LAB_005670a2
    MOV dword ptr [EDX + 0x30ac],0x2    ; 0056714d
        ;   Label: LAB_0056714d
    JMP 0x005670a2                      ; 00567157
        ;   XREF to: 005670a2 (UNCONDITIONAL_JUMP)  ; LAB_005670a2
    MOV ECX,dword ptr [ESP + 0x18]      ; 0056715c
        ;   Label: LAB_0056715c
    ADD EBX,0x24                        ; 00567160
    INC EAX                             ; 00567163
    ADD ESI,0x4                         ; 00567164
    CMP EAX,ECX                         ; 00567167
    JL 0x0056710c                       ; 00567169
        ;   XREF to: 0056710c (CONDITIONAL_JUMP)  ; LAB_0056710c
    JMP 0x0056711d                      ; 0056716b
        ;   XREF to: 0056711d (UNCONDITIONAL_JUMP)  ; LAB_0056711d
    INC EBX                             ; 0056716d
        ;   Label: LAB_0056716d
    CMP EBX,0x2                         ; 0056716e
    JL 0x0056712b                       ; 00567171
        ;   XREF to: 0056712b (CONDITIONAL_JUMP)  ; LAB_0056712b
    JMP 0x00567144                      ; 00567173
        ;   XREF to: 00567144 (UNCONDITIONAL_JUMP)  ; LAB_00567144

