; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_batman_cpp_CBatman_getTargetPoints_FUN_004144c0(CBatman *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_007bc7b8
;   undefined4 DAT_007bc7dc
;   undefined4 DAT_007bc7e4
;
; Called Functions:
;   core_skeleton.cpp_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004144c0
        ;   Label: core_batman.cpp_CBatman_getTargetPoints_FUN_004144c0
    PUSH ESI                            ; 004144c1
    PUSH EDI                            ; 004144c2
    PUSH EBP                            ; 004144c3
    SUB ESP,0x48                        ; 004144c4
    MOV EBP,dword ptr [ESP + 0x5c]      ; 004144c7
    MOV EDX,dword ptr [0x007bc7b8]      ; 004144cb | DAT_007bc7b8
    PUSH EDX                            ; 004144d1
    LEA EAX,[EBP + 0x2b4]               ; 004144d2
    MOV EBX,0x1                         ; 004144d8
    PUSH EAX                            ; 004144dd
    LEA ESI,[ESP + 0x2c]                ; 004144de
    LEA EDI,[ESP + 0x14]                ; 004144e2
    CALL core_skeleton.cpp_FUN_00546a90 ; 004144e6
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x2c]                ; 004144eb
    ADD ESP,0x8                         ; 004144ef
    LEA EAX,[ESP + 0xc]                 ; 004144f2
    MOV ECX,dword ptr [ESP + 0x60]      ; 004144f6
    MOVSD ES:EDI,ESI                    ; 004144fa
    MOVSD ES:EDI,ESI                    ; 004144fb
    MOVSD ES:EDI,ESI                    ; 004144fc
    CMP EAX,ECX                         ; 004144fd
    JNZ 0x00414581                      ; 004144ff
        ;   XREF to: 00414581 (CONDITIONAL_JUMP)  ; LAB_00414581
    MOV EAX,dword ptr [EBP + 0x10b74]   ; 00414505
        ;   Label: LAB_00414505
    CMP dword ptr [EBP + EAX*0x4 + 0x23f4],0x0 ; 0041450b
    JZ 0x00414567                       ; 00414513
        ;   XREF to: 00414567 (CONDITIONAL_JUMP)  ; LAB_00414567
    MOV EDI,dword ptr [0x007bc7dc]      ; 00414515 | DAT_007bc7dc
    PUSH EDI                            ; 0041451b
    LEA EAX,[EBP + 0x2b4]               ; 0041451c
    PUSH EAX                            ; 00414522
    LEA ESI,[ESP + 0x8]                 ; 00414523
    LEA EDI,[ESP + 0x44]                ; 00414527
    CALL core_skeleton.cpp_FUN_00546a90 ; 0041452b
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA EAX,[EBX*0x4 + 0x0]             ; 00414530
    ADD ESP,0x8                         ; 00414537
    SUB EAX,EBX                         ; 0041453a
    MOV EDX,dword ptr [ESP + 0x60]      ; 0041453c
    SHL EAX,0x2                         ; 00414540
    MOV ESI,ESP                         ; 00414543
    ADD EDX,EAX                         ; 00414545
    LEA EAX,[ESP + 0x3c]                ; 00414547
    MOVSD ES:EDI,ESI                    ; 0041454b
    MOVSD ES:EDI,ESI                    ; 0041454c
    MOVSD ES:EDI,ESI                    ; 0041454d
    CMP EDX,EAX                         ; 0041454e
    JZ 0x00414566                       ; 00414550
        ;   XREF to: 00414566 (CONDITIONAL_JUMP)  ; LAB_00414566
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00414552
    MOV dword ptr [EDX],EAX             ; 00414556
    MOV EAX,dword ptr [ESP + 0x40]      ; 00414558
    MOV dword ptr [EDX + 0x4],EAX       ; 0041455c
    MOV EAX,dword ptr [ESP + 0x44]      ; 0041455f
    MOV dword ptr [EDX + 0x8],EAX       ; 00414563
    INC EBX                             ; 00414566
        ;   Label: LAB_00414566
    MOV EAX,dword ptr [EBP + 0x10b60]   ; 00414567
        ;   Label: LAB_00414567
    CMP dword ptr [EBP + EAX*0x4 + 0x23f4],0x0 ; 0041456d
    JNZ 0x0041459a                      ; 00414575
        ;   XREF to: 0041459a (CONDITIONAL_JUMP)  ; LAB_0041459a
    MOV EAX,EBX                         ; 00414577
    ADD ESP,0x48                        ; 00414579
    POP EBP                             ; 0041457c
    POP EDI                             ; 0041457d
    POP ESI                             ; 0041457e
    POP EBX                             ; 0041457f
    RET                                 ; 00414580
    MOV EAX,dword ptr [ESP + 0xc]       ; 00414581
        ;   Label: LAB_00414581
    MOV dword ptr [ECX],EAX             ; 00414585
    MOV EAX,dword ptr [ESP + 0x10]      ; 00414587
    MOV dword ptr [ECX + 0x4],EAX       ; 0041458b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0041458e
    MOV dword ptr [ECX + 0x8],EAX       ; 00414592
    JMP 0x00414505                      ; 00414595
        ;   XREF to: 00414505 (UNCONDITIONAL_JUMP)  ; LAB_00414505
    MOV ECX,dword ptr [0x007bc7e4]      ; 0041459a | DAT_007bc7e4
        ;   Label: LAB_0041459a
    PUSH ECX                            ; 004145a0
    ADD EBP,0x2b4                       ; 004145a1
    PUSH EBP                            ; 004145a7
    LEA ESI,[ESP + 0x20]                ; 004145a8
    LEA EDI,[ESP + 0x38]                ; 004145ac
    CALL core_skeleton.cpp_FUN_00546a90 ; 004145b0
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004145b5
    ADD ESP,0x8                         ; 004145bc
    SUB EAX,EBX                         ; 004145bf
    MOV EDX,dword ptr [ESP + 0x60]      ; 004145c1
    SHL EAX,0x2                         ; 004145c5
    LEA ESI,[ESP + 0x18]                ; 004145c8
    ADD EDX,EAX                         ; 004145cc
    LEA EAX,[ESP + 0x30]                ; 004145ce
    MOVSD ES:EDI,ESI                    ; 004145d2
    MOVSD ES:EDI,ESI                    ; 004145d3
    MOVSD ES:EDI,ESI                    ; 004145d4
    CMP EDX,EAX                         ; 004145d5
    JZ 0x004145ed                       ; 004145d7
        ;   XREF to: 004145ed (CONDITIONAL_JUMP)  ; LAB_004145ed
    MOV EAX,dword ptr [ESP + 0x30]      ; 004145d9
    MOV dword ptr [EDX],EAX             ; 004145dd
    MOV EAX,dword ptr [ESP + 0x34]      ; 004145df
    MOV dword ptr [EDX + 0x4],EAX       ; 004145e3
    MOV EAX,dword ptr [ESP + 0x38]      ; 004145e6
    MOV dword ptr [EDX + 0x8],EAX       ; 004145ea
    INC EBX                             ; 004145ed
        ;   Label: LAB_004145ed
    MOV EAX,EBX                         ; 004145ee
    ADD ESP,0x48                        ; 004145f0
    POP EBP                             ; 004145f3
    POP EDI                             ; 004145f4
    POP ESI                             ; 004145f5
    POP EBX                             ; 004145f6
    RET                                 ; 004145f7

