; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_FUN_00566880()
;
;
; XREF[1]:
;   core_script.cpp_CScript_Unk20_FUN_00565130 at 00565197
;
; Referenced Globals:
;   undefined4 DAT_0310fcd8
;   undefined4 DAT_0310fce0
;   undefined4 DAT_0310fd0c
;   undefined4 DAT_0310fd14
;   undefined4 DAT_0310fd44
;   undefined4 DAT_0310fd48
;
; Called Functions:
;   core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566880
        ;   Label: core_script.cpp_FUN_00566880
    PUSH ESI                            ; 00566881
    PUSH EDI                            ; 00566882
    PUSH EBP                            ; 00566883
    MOV EDX,dword ptr [ESP + 0x14]      ; 00566884
    PUSH EDX                            ; 00566888
    CALL core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910 ; 00566889 | undefined core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910()
        ;   XREF to: 00566910 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0310fcd8]                ; 0056688e | undefined4 DAT_0310fcd8
    MOV ECX,dword ptr [0x0310fce0]      ; 00566893 | undefined4 DAT_0310fce0
    MOV EBX,dword ptr [0x0310fd48]      ; 00566899 | undefined4 DAT_0310fd48
    ADD EAX,ECX                         ; 0056689f
    ADD ESP,0x4                         ; 005668a1
    CMP EAX,EBX                         ; 005668a4
    JLE 0x005668ff                      ; 005668a6 | LAB_005668ff
        ;   XREF to: 005668ff (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x0310fcd8]      ; 005668a8 | undefined4 DAT_0310fcd8
        ;   Label: LAB_005668a8
    CMP ESI,dword ptr [0x0310fd48]      ; 005668ae | undefined4 DAT_0310fd48
    JLE 0x005668bc                      ; 005668b4 | LAB_005668bc
        ;   XREF to: 005668bc (CONDITIONAL_JUMP)
    MOV dword ptr [0x0310fd48],ESI      ; 005668b6 | undefined4 DAT_0310fd48
    MOV EDI,dword ptr [0x0310fd14]      ; 005668bc | undefined4 DAT_0310fd14
        ;   Label: LAB_005668bc
    MOV EAX,[0x0310fd0c]                ; 005668c2 | undefined4 DAT_0310fd0c
    MOV EBP,dword ptr [0x0310fd44]      ; 005668c7 | undefined4 DAT_0310fd44
    ADD EAX,EDI                         ; 005668cd
    CMP EAX,EBP                         ; 005668cf
    JG 0x005668d9                       ; 005668d1 | LAB_005668d9
        ;   XREF to: 005668d9 (CONDITIONAL_JUMP)
    DEC EAX                             ; 005668d3
    MOV [0x0310fd44],EAX                ; 005668d4 | undefined4 DAT_0310fd44
    MOV EDX,dword ptr [0x0310fd0c]      ; 005668d9 | undefined4 DAT_0310fd0c
        ;   Label: LAB_005668d9
    CMP EDX,dword ptr [0x0310fd44]      ; 005668df | undefined4 DAT_0310fd44
    JLE 0x005668ed                      ; 005668e5 | LAB_005668ed
        ;   XREF to: 005668ed (CONDITIONAL_JUMP)
    MOV dword ptr [0x0310fd44],EDX      ; 005668e7 | undefined4 DAT_0310fd44
    MOV ECX,dword ptr [ESP + 0x14]      ; 005668ed
        ;   Label: LAB_005668ed
    PUSH ECX                            ; 005668f1
    CALL core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910 ; 005668f2 | undefined core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910()
        ;   XREF to: 00566910 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005668f7
    POP EBP                             ; 005668fa
    POP EDI                             ; 005668fb
    POP ESI                             ; 005668fc
    POP EBX                             ; 005668fd
    RET                                 ; 005668fe
    DEC EAX                             ; 005668ff
        ;   Label: LAB_005668ff
    MOV [0x0310fd48],EAX                ; 00566900 | undefined4 DAT_0310fd48
    JMP 0x005668a8                      ; 00566905 | LAB_005668a8
        ;   XREF to: 005668a8 (UNCONDITIONAL_JUMP)

