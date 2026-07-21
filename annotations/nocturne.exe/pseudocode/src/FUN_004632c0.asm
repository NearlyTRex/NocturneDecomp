; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004632c0(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004632c0
        ;   Label: FUN_004632c0
    SUB ESP,0x18                        ; 004632c1
    MOV EBX,dword ptr [ESP + 0x24]      ; 004632c4
    PUSH 0x0                            ; 004632c8
    LEA EAX,[ESP + 0x10]                ; 004632ca
    PUSH EAX                            ; 004632ce
    MOV EAX,dword ptr [ESP + 0x28]      ; 004632cf
    ADD EAX,0x150                       ; 004632d3
    PUSH EAX                            ; 004632d8
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004632d9
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    ADD ESP,0xc                         ; 004632de
    CMP EBX,EAX                         ; 004632e1
    JNZ 0x004632ef                      ; 004632e3
        ;   XREF to: 004632ef (CONDITIONAL_JUMP)  ; LAB_004632ef
    MOV EAX,0x1                         ; 004632e5
    ADD ESP,0x18                        ; 004632ea
    POP EBX                             ; 004632ed
    RET                                 ; 004632ee
    MOV EDX,dword ptr [EAX]             ; 004632ef
        ;   Label: LAB_004632ef
    MOV dword ptr [EBX],EDX             ; 004632f1
    MOV EDX,dword ptr [EAX + 0x4]       ; 004632f3
    MOV dword ptr [EBX + 0x4],EDX       ; 004632f6
    MOV EDX,dword ptr [EAX + 0x8]       ; 004632f9
    MOV dword ptr [EBX + 0x8],EDX       ; 004632fc
    MOV EAX,0x1                         ; 004632ff
    ADD ESP,0x18                        ; 00463304
    POP EBX                             ; 00463307
    RET                                 ; 00463308

