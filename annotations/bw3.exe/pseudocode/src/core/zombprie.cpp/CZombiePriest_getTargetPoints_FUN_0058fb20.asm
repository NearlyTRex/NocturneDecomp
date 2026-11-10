; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombprie_cpp_CZombiePriest_getTargetPoints_FUN_0058fb20(CZombiePriest *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CZombiePriest *  Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_02d24970
;   undefined4 DAT_02d24994
;   undefined4 DAT_02d2499c
;
; Called Functions:
;   core_skeleton.cpp_FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058fb20
        ;   Label: core_zombprie.cpp_CZombiePriest_getTargetPoints_FUN_0058fb20
    PUSH ESI                            ; 0058fb21
    PUSH EDI                            ; 0058fb22
    PUSH EBP                            ; 0058fb23
    SUB ESP,0x48                        ; 0058fb24
    MOV EBP,dword ptr [ESP + 0x5c]      ; 0058fb27
    MOV EDX,dword ptr [0x02d24970]      ; 0058fb2b | DAT_02d24970
    PUSH EDX                            ; 0058fb31
    LEA EAX,[EBP + 0x158]               ; 0058fb32
    MOV EBX,0x1                         ; 0058fb38
    PUSH EAX                            ; 0058fb3d
    LEA ESI,[ESP + 0x2c]                ; 0058fb3e
    LEA EDI,[ESP + 0x14]                ; 0058fb42
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 0058fb46
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x2c]                ; 0058fb4b
    ADD ESP,0x8                         ; 0058fb4f
    LEA EAX,[ESP + 0xc]                 ; 0058fb52
    MOV ECX,dword ptr [ESP + 0x60]      ; 0058fb56
    MOVSD ES:EDI,ESI                    ; 0058fb5a
    MOVSD ES:EDI,ESI                    ; 0058fb5b
    MOVSD ES:EDI,ESI                    ; 0058fb5c
    CMP EAX,ECX                         ; 0058fb5d
    JNZ 0x0058fbe1                      ; 0058fb5f
        ;   XREF to: 0058fbe1 (CONDITIONAL_JUMP)  ; LAB_0058fbe1
    MOV EAX,dword ptr [EBP + 0xd100]    ; 0058fb65
        ;   Label: LAB_0058fb65
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 0058fb6b
    JZ 0x0058fbc7                       ; 0058fb73
        ;   XREF to: 0058fbc7 (CONDITIONAL_JUMP)  ; LAB_0058fbc7
    MOV EDI,dword ptr [0x02d24994]      ; 0058fb75 | DAT_02d24994
    PUSH EDI                            ; 0058fb7b
    LEA EAX,[EBP + 0x158]               ; 0058fb7c
    PUSH EAX                            ; 0058fb82
    LEA ESI,[ESP + 0x8]                 ; 0058fb83
    LEA EDI,[ESP + 0x44]                ; 0058fb87
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 0058fb8b
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA EAX,[EBX*0x4 + 0x0]             ; 0058fb90
    ADD ESP,0x8                         ; 0058fb97
    SUB EAX,EBX                         ; 0058fb9a
    MOV EDX,dword ptr [ESP + 0x60]      ; 0058fb9c
    SHL EAX,0x2                         ; 0058fba0
    MOV ESI,ESP                         ; 0058fba3
    ADD EDX,EAX                         ; 0058fba5
    LEA EAX,[ESP + 0x3c]                ; 0058fba7
    MOVSD ES:EDI,ESI                    ; 0058fbab
    MOVSD ES:EDI,ESI                    ; 0058fbac
    MOVSD ES:EDI,ESI                    ; 0058fbad
    CMP EDX,EAX                         ; 0058fbae
    JZ 0x0058fbc6                       ; 0058fbb0
        ;   XREF to: 0058fbc6 (CONDITIONAL_JUMP)  ; LAB_0058fbc6
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0058fbb2
    MOV dword ptr [EDX],EAX             ; 0058fbb6
    MOV EAX,dword ptr [ESP + 0x40]      ; 0058fbb8
    MOV dword ptr [EDX + 0x4],EAX       ; 0058fbbc
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058fbbf
    MOV dword ptr [EDX + 0x8],EAX       ; 0058fbc3
    INC EBX                             ; 0058fbc6
        ;   Label: LAB_0058fbc6
    MOV EAX,dword ptr [EBP + 0xd104]    ; 0058fbc7
        ;   Label: LAB_0058fbc7
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 0058fbcd
    JNZ 0x0058fbfa                      ; 0058fbd5
        ;   XREF to: 0058fbfa (CONDITIONAL_JUMP)  ; LAB_0058fbfa
    MOV EAX,EBX                         ; 0058fbd7
    ADD ESP,0x48                        ; 0058fbd9
    POP EBP                             ; 0058fbdc
    POP EDI                             ; 0058fbdd
    POP ESI                             ; 0058fbde
    POP EBX                             ; 0058fbdf
    RET                                 ; 0058fbe0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0058fbe1
        ;   Label: LAB_0058fbe1
    MOV dword ptr [ECX],EAX             ; 0058fbe5
    MOV EAX,dword ptr [ESP + 0x10]      ; 0058fbe7
    MOV dword ptr [ECX + 0x4],EAX       ; 0058fbeb
    MOV EAX,dword ptr [ESP + 0x14]      ; 0058fbee
    MOV dword ptr [ECX + 0x8],EAX       ; 0058fbf2
    JMP 0x0058fb65                      ; 0058fbf5
        ;   XREF to: 0058fb65 (UNCONDITIONAL_JUMP)  ; LAB_0058fb65
    MOV ECX,dword ptr [0x02d2499c]      ; 0058fbfa | DAT_02d2499c
        ;   Label: LAB_0058fbfa
    PUSH ECX                            ; 0058fc00
    ADD EBP,0x158                       ; 0058fc01
    PUSH EBP                            ; 0058fc07
    LEA ESI,[ESP + 0x20]                ; 0058fc08
    LEA EDI,[ESP + 0x38]                ; 0058fc0c
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 0058fc10
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA EAX,[EBX*0x4 + 0x0]             ; 0058fc15
    ADD ESP,0x8                         ; 0058fc1c
    SUB EAX,EBX                         ; 0058fc1f
    MOV EDX,dword ptr [ESP + 0x60]      ; 0058fc21
    SHL EAX,0x2                         ; 0058fc25
    LEA ESI,[ESP + 0x18]                ; 0058fc28
    ADD EDX,EAX                         ; 0058fc2c
    LEA EAX,[ESP + 0x30]                ; 0058fc2e
    MOVSD ES:EDI,ESI                    ; 0058fc32
    MOVSD ES:EDI,ESI                    ; 0058fc33
    MOVSD ES:EDI,ESI                    ; 0058fc34
    CMP EDX,EAX                         ; 0058fc35
    JZ 0x0058fc4d                       ; 0058fc37
        ;   XREF to: 0058fc4d (CONDITIONAL_JUMP)  ; LAB_0058fc4d
    MOV EAX,dword ptr [ESP + 0x30]      ; 0058fc39
    MOV dword ptr [EDX],EAX             ; 0058fc3d
    MOV EAX,dword ptr [ESP + 0x34]      ; 0058fc3f
    MOV dword ptr [EDX + 0x4],EAX       ; 0058fc43
    MOV EAX,dword ptr [ESP + 0x38]      ; 0058fc46
    MOV dword ptr [EDX + 0x8],EAX       ; 0058fc4a
    INC EBX                             ; 0058fc4d
        ;   Label: LAB_0058fc4d
    MOV EAX,EBX                         ; 0058fc4e
    ADD ESP,0x48                        ; 0058fc50
    POP EBP                             ; 0058fc53
    POP EDI                             ; 0058fc54
    POP ESI                             ; 0058fc55
    POP EBX                             ; 0058fc56
    RET                                 ; 0058fc57

