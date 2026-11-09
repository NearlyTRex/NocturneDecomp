; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfont_cpp_FUN_0045a8d0(void)
;
;
; XREF[1]:
;   core_main.c_FUN_004e4c70 at 004e4cd7
;
; Referenced Globals:
;   undefined4 DAT_01549aa0
;   undefined4 DAT_01549aa4
;   undefined4 DAT_01549aa8
;   undefined4 DAT_01549aac
;   undefined4 DAT_01549ab0
;   undefined4 DAT_01549ab4
;   undefined4 DAT_01549ab8
;   undefined4 DAT_01549abc
;   undefined4 DAT_01549ac0
;   undefined4 DAT_01549ac4
;   undefined4 DAT_01549ac8
;   undefined4 DAT_01549acc
;   undefined4 DAT_01549ad0
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01dd4890
;
; Called Functions:
;   crt_unknown.c_FUN_005a30c4
;   engine_font.cpp_FUN_004af7b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045a8d0
        ;   Label: core_dfont.cpp_FUN_0045a8d0
    PUSH ESI                            ; 0045a8d1
    PUSH EDI                            ; 0045a8d2
    PUSH EBP                            ; 0045a8d3
    MOV EDX,dword ptr [0x01549aa0]      ; 0045a8d4 | DAT_01549aa0
    TEST EDX,EDX                        ; 0045a8da
    JNZ 0x0045aa9e                      ; 0045a8dc
        ;   XREF to: 0045aa9e (CONDITIONAL_JUMP)  ; LAB_0045aa9e
    XOR EBX,EBX                         ; 0045a8e2
        ;   Label: LAB_0045a8e2
    MOV ESI,dword ptr [0x01549aa4]      ; 0045a8e4 | DAT_01549aa4
    MOV dword ptr [0x01549aa0],EBX      ; 0045a8ea | DAT_01549aa0
    TEST ESI,ESI                        ; 0045a8f0
    JZ 0x0045a907                       ; 0045a8f2
        ;   XREF to: 0045a907 (CONDITIONAL_JUMP)  ; LAB_0045a907
    PUSH EBX                            ; 0045a8f4
    PUSH ESI                            ; 0045a8f5
    CALL engine_font.cpp_FUN_004af7b0   ; 0045a8f6
        ;   XREF to: 004af7b0 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_FUN_004af7b0(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045a8fb
    PUSH EAX                            ; 0045a8fe
    CALL crt_unknown.c_FUN_005a30c4     ; 0045a8ff
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0045a904
    XOR EBP,EBP                         ; 0045a907
        ;   Label: LAB_0045a907
    MOV EAX,[0x01549aa8]                ; 0045a909 | DAT_01549aa8
    MOV dword ptr [0x01549aa4],EBP      ; 0045a90e | DAT_01549aa4
    TEST EAX,EAX                        ; 0045a914
    JZ 0x0045a92b                       ; 0045a916
        ;   XREF to: 0045a92b (CONDITIONAL_JUMP)  ; LAB_0045a92b
    PUSH EBP                            ; 0045a918
    PUSH EAX                            ; 0045a919
    CALL engine_font.cpp_FUN_004af7b0   ; 0045a91a
        ;   XREF to: 004af7b0 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_FUN_004af7b0(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045a91f
    PUSH EAX                            ; 0045a922
    CALL crt_unknown.c_FUN_005a30c4     ; 0045a923
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0045a928
    XOR ECX,ECX                         ; 0045a92b
        ;   Label: LAB_0045a92b
    MOV EBX,dword ptr [0x01549aac]      ; 0045a92d | DAT_01549aac
    MOV dword ptr [0x01549aa8],ECX      ; 0045a933 | DAT_01549aa8
    TEST EBX,EBX                        ; 0045a939
    JZ 0x0045a950                       ; 0045a93b
        ;   XREF to: 0045a950 (CONDITIONAL_JUMP)  ; LAB_0045a950
    PUSH ECX                            ; 0045a93d
    PUSH EBX                            ; 0045a93e
    CALL engine_font.cpp_FUN_004af7b0   ; 0045a93f
        ;   XREF to: 004af7b0 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_FUN_004af7b0(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045a944
    PUSH EAX                            ; 0045a947
    CALL crt_unknown.c_FUN_005a30c4     ; 0045a948
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0045a94d
    XOR EDI,EDI                         ; 0045a950
        ;   Label: LAB_0045a950
    MOV EBP,dword ptr [0x01549ab0]      ; 0045a952 | DAT_01549ab0
    MOV dword ptr [0x01549aac],EDI      ; 0045a958 | DAT_01549aac
    TEST EBP,EBP                        ; 0045a95e
    JZ 0x0045a975                       ; 0045a960
        ;   XREF to: 0045a975 (CONDITIONAL_JUMP)  ; LAB_0045a975
    PUSH EDI                            ; 0045a962
    PUSH EBP                            ; 0045a963
    CALL engine_font.cpp_FUN_004af7b0   ; 0045a964
        ;   XREF to: 004af7b0 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_FUN_004af7b0(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045a969
    PUSH EAX                            ; 0045a96c
    CALL crt_unknown.c_FUN_005a30c4     ; 0045a96d
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0045a972
    XOR EDX,EDX                         ; 0045a975
        ;   Label: LAB_0045a975
    MOV ECX,dword ptr [0x01549ab4]      ; 0045a977 | DAT_01549ab4
    MOV dword ptr [0x01549ab0],EDX      ; 0045a97d | DAT_01549ab0
    TEST ECX,ECX                        ; 0045a983
    JZ 0x0045a99a                       ; 0045a985
        ;   XREF to: 0045a99a (CONDITIONAL_JUMP)  ; LAB_0045a99a
    PUSH EDX                            ; 0045a987
    PUSH ECX                            ; 0045a988
    CALL engine_font.cpp_FUN_004af7b0   ; 0045a989
        ;   XREF to: 004af7b0 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_FUN_004af7b0(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045a98e
    PUSH EAX                            ; 0045a991
    CALL crt_unknown.c_FUN_005a30c4     ; 0045a992
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0045a997
    XOR ESI,ESI                         ; 0045a99a
        ;   Label: LAB_0045a99a
    MOV EDI,dword ptr [0x01549ab8]      ; 0045a99c | DAT_01549ab8
    MOV dword ptr [0x01549ab4],ESI      ; 0045a9a2 | DAT_01549ab4
    TEST EDI,EDI                        ; 0045a9a8
    JZ 0x0045a9bf                       ; 0045a9aa
        ;   XREF to: 0045a9bf (CONDITIONAL_JUMP)  ; LAB_0045a9bf
    PUSH ESI                            ; 0045a9ac
    PUSH EDI                            ; 0045a9ad
    CALL engine_font.cpp_FUN_004af7b0   ; 0045a9ae
        ;   XREF to: 004af7b0 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_FUN_004af7b0(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045a9b3
    PUSH EAX                            ; 0045a9b6
    CALL crt_unknown.c_FUN_005a30c4     ; 0045a9b7
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0045a9bc
    XOR EAX,EAX                         ; 0045a9bf
        ;   Label: LAB_0045a9bf
    MOV ECX,dword ptr [0x01549abc]      ; 0045a9c1 | DAT_01549abc
    MOV [0x01c5b0e0],EAX                ; 0045a9c7 | DAT_01c5b0e0
    MOV [0x01549ab8],EAX                ; 0045a9cc | DAT_01549ab8
    TEST ECX,ECX                        ; 0045a9d1
    JZ 0x0045a9e8                       ; 0045a9d3
        ;   XREF to: 0045a9e8 (CONDITIONAL_JUMP)  ; LAB_0045a9e8
    PUSH EAX                            ; 0045a9d5
    PUSH ECX                            ; 0045a9d6
    CALL engine_font.cpp_FUN_004af7b0   ; 0045a9d7
        ;   XREF to: 004af7b0 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_FUN_004af7b0(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045a9dc
    PUSH EAX                            ; 0045a9df
    CALL crt_unknown.c_FUN_005a30c4     ; 0045a9e0
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0045a9e5
    XOR ESI,ESI                         ; 0045a9e8
        ;   Label: LAB_0045a9e8
    MOV EDI,dword ptr [0x01549ac0]      ; 0045a9ea | DAT_01549ac0
    MOV dword ptr [0x01549abc],ESI      ; 0045a9f0 | DAT_01549abc
    TEST EDI,EDI                        ; 0045a9f6
    JZ 0x0045aa0d                       ; 0045a9f8
        ;   XREF to: 0045aa0d (CONDITIONAL_JUMP)  ; LAB_0045aa0d
    PUSH ESI                            ; 0045a9fa
    PUSH EDI                            ; 0045a9fb
    CALL engine_font.cpp_FUN_004af7b0   ; 0045a9fc
        ;   XREF to: 004af7b0 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_FUN_004af7b0(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045aa01
    PUSH EAX                            ; 0045aa04
    CALL crt_unknown.c_FUN_005a30c4     ; 0045aa05
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0045aa0a
    XOR EAX,EAX                         ; 0045aa0d
        ;   Label: LAB_0045aa0d
    MOV EDX,dword ptr [0x01dd4890]      ; 0045aa0f | DAT_01dd4890
    MOV [0x01549ac0],EAX                ; 0045aa15 | DAT_01549ac0
    TEST EDX,EDX                        ; 0045aa1a
    JZ 0x0045aa99                       ; 0045aa1c
        ;   XREF to: 0045aa99 (CONDITIONAL_JUMP)  ; LAB_0045aa99
    MOV ECX,dword ptr [0x01549ac4]      ; 0045aa22 | DAT_01549ac4
    TEST ECX,ECX                        ; 0045aa28
    JNZ 0x0045aab7                      ; 0045aa2a
        ;   XREF to: 0045aab7 (CONDITIONAL_JUMP)  ; LAB_0045aab7
    XOR EBX,EBX                         ; 0045aa30
        ;   Label: LAB_0045aa30
    MOV ESI,dword ptr [0x01549ac8]      ; 0045aa32 | DAT_01549ac8
    MOV dword ptr [0x01549ac4],EBX      ; 0045aa38 | DAT_01549ac4
    TEST ESI,ESI                        ; 0045aa3e
    JZ 0x0045aa50                       ; 0045aa40
        ;   XREF to: 0045aa50 (CONDITIONAL_JUMP)  ; LAB_0045aa50
    PUSH 0x2                            ; 0045aa42
    MOV EDX,dword ptr [ESI + 0x6a44]    ; 0045aa44
    PUSH ESI                            ; 0045aa4a
    CALL dword ptr [EDX]                ; 0045aa4b
    ADD ESP,0x8                         ; 0045aa4d
    XOR EDI,EDI                         ; 0045aa50
        ;   Label: LAB_0045aa50
    MOV EBP,dword ptr [0x01549acc]      ; 0045aa52 | DAT_01549acc
    MOV dword ptr [0x01549ac8],EDI      ; 0045aa58 | DAT_01549ac8
    TEST EBP,EBP                        ; 0045aa5e
    JZ 0x0045aa70                       ; 0045aa60
        ;   XREF to: 0045aa70 (CONDITIONAL_JUMP)  ; LAB_0045aa70
    PUSH 0x2                            ; 0045aa62
    MOV EDX,dword ptr [EBP + 0x6a44]    ; 0045aa64
    PUSH EBP                            ; 0045aa6a
    CALL dword ptr [EDX]                ; 0045aa6b
    ADD ESP,0x8                         ; 0045aa6d
    XOR EAX,EAX                         ; 0045aa70
        ;   Label: LAB_0045aa70
    MOV EDX,dword ptr [0x01549ad0]      ; 0045aa72 | DAT_01549ad0
    MOV [0x01549acc],EAX                ; 0045aa78 | DAT_01549acc
    TEST EDX,EDX                        ; 0045aa7d
    JZ 0x0045aa91                       ; 0045aa7f
        ;   XREF to: 0045aa91 (CONDITIONAL_JUMP)  ; LAB_0045aa91
    PUSH 0x2                            ; 0045aa81
    MOV EAX,EDX                         ; 0045aa83
    PUSH EAX                            ; 0045aa85
    MOV EDX,dword ptr [EDX + 0x6a44]    ; 0045aa86
    CALL dword ptr [EDX]                ; 0045aa8c
    ADD ESP,0x8                         ; 0045aa8e
    XOR ECX,ECX                         ; 0045aa91
        ;   Label: LAB_0045aa91
    MOV dword ptr [0x01549ad0],ECX      ; 0045aa93 | DAT_01549ad0
    POP EBP                             ; 0045aa99
        ;   Label: LAB_0045aa99
    POP EDI                             ; 0045aa9a
    POP ESI                             ; 0045aa9b
    POP EBX                             ; 0045aa9c
    RET                                 ; 0045aa9d
    PUSH 0x0                            ; 0045aa9e
        ;   Label: LAB_0045aa9e
    PUSH EDX                            ; 0045aaa0
    CALL engine_font.cpp_FUN_004af7b0   ; 0045aaa1
        ;   XREF to: 004af7b0 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_FUN_004af7b0(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045aaa6
    PUSH EAX                            ; 0045aaa9
    CALL crt_unknown.c_FUN_005a30c4     ; 0045aaaa
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0045aaaf
    JMP 0x0045a8e2                      ; 0045aab2
        ;   XREF to: 0045a8e2 (UNCONDITIONAL_JUMP)  ; LAB_0045a8e2
    PUSH 0x2                            ; 0045aab7
        ;   Label: LAB_0045aab7
    MOV EDX,dword ptr [ECX + 0x6a44]    ; 0045aab9
    PUSH ECX                            ; 0045aabf
    CALL dword ptr [EDX]                ; 0045aac0
    ADD ESP,0x8                         ; 0045aac2
    JMP 0x0045aa30                      ; 0045aac5
        ;   XREF to: 0045aa30 (UNCONDITIONAL_JUMP)  ; LAB_0045aa30

