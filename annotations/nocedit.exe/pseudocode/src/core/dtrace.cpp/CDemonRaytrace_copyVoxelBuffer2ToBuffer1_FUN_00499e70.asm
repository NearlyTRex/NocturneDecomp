; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dtrace.cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70(CDemonRaytrace * this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_FUN_00574560 at 00574565
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499e70
        ;   Label: core_dtrace.cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70
    PUSH ESI                            ; 00499e71
    PUSH EDI                            ; 00499e72
    PUSH EBP                            ; 00499e73
    SUB ESP,0x8                         ; 00499e74
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00499e77
    XOR EDX,EDX                         ; 00499e7b
    MOV ECX,dword ptr [EBP + 0x40]      ; 00499e7d
    MOV dword ptr [ESP],EDX             ; 00499e80
    TEST ECX,ECX                        ; 00499e83
    JLE 0x00499ed9                      ; 00499e85 | LAB_00499ed9
        ;   XREF to: 00499ed9 (CONDITIONAL_JUMP)
    XOR EDI,EDI                         ; 00499e87
        ;   Label: LAB_00499e87
    MOV EAX,dword ptr [EBP + 0x44]      ; 00499e89
    MOV dword ptr [ESP + 0x4],EDI       ; 00499e8c
    TEST EAX,EAX                        ; 00499e90
    JLE 0x00499ecb                      ; 00499e92 | LAB_00499ecb
        ;   XREF to: 00499ecb (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBP + 0x48]      ; 00499e94
        ;   Label: LAB_00499e94
    XOR EBX,EBX                         ; 00499e97
    TEST ESI,ESI                        ; 00499e99
    JLE 0x00499ebb                      ; 00499e9b | LAB_00499ebb
        ;   XREF to: 00499ebb (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00499e9d
        ;   Label: LAB_00499e9d
    MOV EAX,dword ptr [ESP + 0x8]       ; 00499e9e
    PUSH EAX                            ; 00499ea2
    MOV EDX,dword ptr [ESP + 0x8]       ; 00499ea3
    PUSH EDX                            ; 00499ea7
    PUSH EBP                            ; 00499ea8
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0 ; 00499ea9 | CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
        ;   XREF to: 004952b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00499eae
    TEST EAX,EAX                        ; 00499eb1
    JNZ 0x00499ee1                      ; 00499eb3 | LAB_00499ee1
        ;   XREF to: 00499ee1 (CONDITIONAL_JUMP)
    INC EBX                             ; 00499eb5
        ;   Label: LAB_00499eb5
    CMP EBX,dword ptr [EBP + 0x48]      ; 00499eb6
    JL 0x00499e9d                       ; 00499eb9 | LAB_00499e9d
        ;   XREF to: 00499e9d (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x4]       ; 00499ebb
        ;   Label: LAB_00499ebb
    INC EDX                             ; 00499ebf
    MOV ECX,dword ptr [EBP + 0x44]      ; 00499ec0
    MOV dword ptr [ESP + 0x4],EDX       ; 00499ec3
    CMP EDX,ECX                         ; 00499ec7
    JL 0x00499e94                       ; 00499ec9 | LAB_00499e94
        ;   XREF to: 00499e94 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP]             ; 00499ecb
        ;   Label: LAB_00499ecb
    INC EBX                             ; 00499ece
    MOV ESI,dword ptr [EBP + 0x40]      ; 00499ecf
    MOV dword ptr [ESP],EBX             ; 00499ed2
    CMP EBX,ESI                         ; 00499ed5
    JL 0x00499e87                       ; 00499ed7 | LAB_00499e87
        ;   XREF to: 00499e87 (CONDITIONAL_JUMP)
    ADD ESP,0x8                         ; 00499ed9
        ;   Label: LAB_00499ed9
    POP EBP                             ; 00499edc
    POP EDI                             ; 00499edd
    POP ESI                             ; 00499ede
    POP EBX                             ; 00499edf
    RET                                 ; 00499ee0
    MOV ECX,dword ptr [EAX]             ; 00499ee1
        ;   Label: LAB_00499ee1
    TEST ECX,ECX                        ; 00499ee3
    JZ 0x00499eb5                       ; 00499ee5 | LAB_00499eb5
        ;   XREF to: 00499eb5 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EAX + 0x4]       ; 00499ee7
    TEST ESI,ESI                        ; 00499eea
    JZ 0x00499eb5                       ; 00499eec | LAB_00499eb5
        ;   XREF to: 00499eb5 (CONDITIONAL_JUMP)
    MOV EDI,ECX                         ; 00499eee
    MOV ECX,0x40                        ; 00499ef0
    PUSH EDI                            ; 00499ef5
    MOV EAX,ECX                         ; 00499ef6
    SHR ECX,0x2                         ; 00499ef8
    MOVSD.REP ES:EDI,ESI                ; 00499efb
    MOV CL,AL                           ; 00499efd
    AND CL,0x3                          ; 00499eff
    MOVSB.REP ES:EDI,ESI                ; 00499f02
    POP EDI                             ; 00499f04
    JMP 0x00499eb5                      ; 00499f05 | LAB_00499eb5
        ;   XREF to: 00499eb5 (UNCONDITIONAL_JUMP)

