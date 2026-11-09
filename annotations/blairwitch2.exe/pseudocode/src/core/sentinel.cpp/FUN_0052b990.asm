; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_sentinel_cpp_FUN_0052b990(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01e6614c
;   undefined4 DAT_01e66160
;   undefined4 DAT_01e66164
;   undefined4 DAT_01e66170
;   undefined4 DAT_01e66178
;
; Called Functions:
;   core_skeleton.cpp_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b990
        ;   Label: core_sentinel.cpp_FUN_0052b990
    PUSH ESI                            ; 0052b991
    PUSH EDI                            ; 0052b992
    PUSH EBP                            ; 0052b993
    SUB ESP,0x7c                        ; 0052b994
    MOV EBP,dword ptr [ESP + 0x90]      ; 0052b997
    MOV EBX,dword ptr [ESP + 0x94]      ; 0052b99e
    MOV ECX,dword ptr [0x01e6614c]      ; 0052b9a5 | DAT_01e6614c
    MOV EDX,0x5                         ; 0052b9ab
    PUSH ECX                            ; 0052b9b0
    LEA EAX,[EBP + 0x2b4]               ; 0052b9b1
    LEA ESI,[ESP + 0x4c]                ; 0052b9b7
    PUSH EAX                            ; 0052b9bb
    LEA EDI,[ESP + 0x44]                ; 0052b9bc
    MOV dword ptr [ESP + 0x80],EDX      ; 0052b9c0
    CALL core_skeleton.cpp_FUN_00546a90 ; 0052b9c7
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x50]                ; 0052b9cc
    ADD ESP,0x8                         ; 0052b9d0
    LEA EAX,[ESP + 0x3c]                ; 0052b9d3
    MOVSD ES:EDI,ESI                    ; 0052b9d7
    MOVSD ES:EDI,ESI                    ; 0052b9d8
    MOVSD ES:EDI,ESI                    ; 0052b9d9
    CMP EBX,EAX                         ; 0052b9da
    JZ 0x0052b9f2                       ; 0052b9dc
        ;   XREF to: 0052b9f2 (CONDITIONAL_JUMP)  ; LAB_0052b9f2
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0052b9de
    MOV dword ptr [EBX],EAX             ; 0052b9e2
    MOV EAX,dword ptr [ESP + 0x40]      ; 0052b9e4
    MOV dword ptr [EBX + 0x4],EAX       ; 0052b9e8
    MOV EAX,dword ptr [ESP + 0x44]      ; 0052b9eb
    MOV dword ptr [EBX + 0x8],EAX       ; 0052b9ef
    MOV ESI,dword ptr [0x01e66160]      ; 0052b9f2 | DAT_01e66160
        ;   Label: LAB_0052b9f2
    PUSH ESI                            ; 0052b9f8
    LEA EAX,[EBP + 0x2b4]               ; 0052b9f9
    PUSH EAX                            ; 0052b9ff
    LEA ESI,[ESP + 0x8]                 ; 0052ba00
    LEA EDI,[ESP + 0x14]                ; 0052ba04
    CALL core_skeleton.cpp_FUN_00546a90 ; 0052ba08
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x8]                 ; 0052ba0d
    LEA EAX,[ESP + 0x14]                ; 0052ba11
    ADD ESP,0x8                         ; 0052ba15
    LEA EDX,[EBX + 0xc]                 ; 0052ba18
    MOVSD ES:EDI,ESI                    ; 0052ba1b
    MOVSD ES:EDI,ESI                    ; 0052ba1c
    MOVSD ES:EDI,ESI                    ; 0052ba1d
    CMP EDX,EAX                         ; 0052ba1e
    JZ 0x0052ba36                       ; 0052ba20
        ;   XREF to: 0052ba36 (CONDITIONAL_JUMP)  ; LAB_0052ba36
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052ba22
    MOV dword ptr [EDX],EAX             ; 0052ba26
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052ba28
    MOV dword ptr [EDX + 0x4],EAX       ; 0052ba2c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0052ba2f
    MOV dword ptr [EDX + 0x8],EAX       ; 0052ba33
    MOV EDI,dword ptr [0x01e66164]      ; 0052ba36 | DAT_01e66164
        ;   Label: LAB_0052ba36
    PUSH EDI                            ; 0052ba3c
    LEA EAX,[EBP + 0x2b4]               ; 0052ba3d
    PUSH EAX                            ; 0052ba43
    LEA ESI,[ESP + 0x74]                ; 0052ba44
    LEA EDI,[ESP + 0x20]                ; 0052ba48
    CALL core_skeleton.cpp_FUN_00546a90 ; 0052ba4c
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x74]                ; 0052ba51
    LEA EAX,[ESP + 0x20]                ; 0052ba55
    ADD ESP,0x8                         ; 0052ba59
    LEA EDX,[EBX + 0x18]                ; 0052ba5c
    MOVSD ES:EDI,ESI                    ; 0052ba5f
    MOVSD ES:EDI,ESI                    ; 0052ba60
    MOVSD ES:EDI,ESI                    ; 0052ba61
    CMP EDX,EAX                         ; 0052ba62
    JZ 0x0052ba7a                       ; 0052ba64
        ;   XREF to: 0052ba7a (CONDITIONAL_JUMP)  ; LAB_0052ba7a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0052ba66
    MOV dword ptr [EDX],EAX             ; 0052ba6a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0052ba6c
    MOV dword ptr [EDX + 0x4],EAX       ; 0052ba70
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052ba73
    MOV dword ptr [EDX + 0x8],EAX       ; 0052ba77
    MOV EAX,[0x01e66170]                ; 0052ba7a | DAT_01e66170
        ;   Label: LAB_0052ba7a
    PUSH EAX                            ; 0052ba7f
    LEA EAX,[EBP + 0x2b4]               ; 0052ba80
    PUSH EAX                            ; 0052ba86
    LEA ESI,[ESP + 0x38]                ; 0052ba87
    LEA EDI,[ESP + 0x5c]                ; 0052ba8b
    CALL core_skeleton.cpp_FUN_00546a90 ; 0052ba8f
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x38]                ; 0052ba94
    LEA EAX,[ESP + 0x5c]                ; 0052ba98
    ADD ESP,0x8                         ; 0052ba9c
    LEA EDX,[EBX + 0x24]                ; 0052ba9f
    MOVSD ES:EDI,ESI                    ; 0052baa2
    MOVSD ES:EDI,ESI                    ; 0052baa3
    MOVSD ES:EDI,ESI                    ; 0052baa4
    CMP EDX,EAX                         ; 0052baa5
    JZ 0x0052babd                       ; 0052baa7
        ;   XREF to: 0052babd (CONDITIONAL_JUMP)  ; LAB_0052babd
    MOV EAX,dword ptr [ESP + 0x54]      ; 0052baa9
    MOV dword ptr [EDX],EAX             ; 0052baad
    MOV EAX,dword ptr [ESP + 0x58]      ; 0052baaf
    MOV dword ptr [EDX + 0x4],EAX       ; 0052bab3
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0052bab6
    MOV dword ptr [EDX + 0x8],EAX       ; 0052baba
    MOV EDX,dword ptr [0x01e66178]      ; 0052babd | DAT_01e66178
        ;   Label: LAB_0052babd
    PUSH EDX                            ; 0052bac3
    ADD EBP,0x2b4                       ; 0052bac4
    LEA ESI,[ESP + 0x64]                ; 0052baca
    PUSH EBP                            ; 0052bace
    LEA EDI,[ESP + 0x2c]                ; 0052bacf
    ADD EBX,0x30                        ; 0052bad3
    CALL core_skeleton.cpp_FUN_00546a90 ; 0052bad6
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x68]                ; 0052badb
    ADD ESP,0x8                         ; 0052badf
    LEA EAX,[ESP + 0x24]                ; 0052bae2
    MOVSD ES:EDI,ESI                    ; 0052bae6
    MOVSD ES:EDI,ESI                    ; 0052bae7
    MOVSD ES:EDI,ESI                    ; 0052bae8
    CMP EBX,EAX                         ; 0052bae9
    JNZ 0x0052baf9                      ; 0052baeb
        ;   XREF to: 0052baf9 (CONDITIONAL_JUMP)  ; LAB_0052baf9
    MOV EAX,dword ptr [ESP + 0x78]      ; 0052baed
    ADD ESP,0x7c                        ; 0052baf1
    POP EBP                             ; 0052baf4
    POP EDI                             ; 0052baf5
    POP ESI                             ; 0052baf6
    POP EBX                             ; 0052baf7
    RET                                 ; 0052baf8
    MOV EAX,dword ptr [ESP + 0x24]      ; 0052baf9
        ;   Label: LAB_0052baf9
    MOV dword ptr [EBX],EAX             ; 0052bafd
    MOV EAX,dword ptr [ESP + 0x28]      ; 0052baff
    MOV dword ptr [EBX + 0x4],EAX       ; 0052bb03
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0052bb06
    MOV dword ptr [EBX + 0x8],EAX       ; 0052bb0a
    MOV EAX,dword ptr [ESP + 0x78]      ; 0052bb0d
    ADD ESP,0x7c                        ; 0052bb11
    POP EBP                             ; 0052bb14
    POP EDI                             ; 0052bb15
    POP ESI                             ; 0052bb16
    POP EBX                             ; 0052bb17
    RET                                 ; 0052bb18

