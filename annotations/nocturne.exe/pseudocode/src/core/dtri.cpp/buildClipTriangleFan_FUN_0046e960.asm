; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_dtri_cpp_buildClipTriangleFan_FUN_0046e960(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   undefined4 DAT_01bc9e08
;   undefined4 DAT_01bc9e14
;   undefined4 DAT_01bc9e20
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
;   core_dtri.cpp_getClippedTriangleCount_FUN_0046e950
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0046e960
        ;   Label: core_dtri.cpp_buildClipTriangleFan_FUN_0046e960
    SUB ESP,0x4                         ; 0046e961
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046e964
    PUSH EDX                            ; 0046e968
    CALL core_dtri.cpp_getClippedTriangleCount_FUN_0046e950 ; 0046e969
        ;   XREF to: 0046e950 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_getClippedTriangleCount_FUN_0046e950(int flags)
    ADD ESP,0x4                         ; 0046e96e
    XOR EBP,EBP                         ; 0046e971
    MOV dword ptr [ESP],EAX             ; 0046e973
    TEST EAX,EAX                        ; 0046e976
    JLE 0x0046e9b7                      ; 0046e978
        ;   XREF to: 0046e9b7 (CONDITIONAL_JUMP)  ; LAB_0046e9b7
    PUSH EDI                            ; 0046e97a
    PUSH ESI                            ; 0046e97b
    PUSH EBX                            ; 0046e97c
    MOV ESI,0x1bc9e08                   ; 0046e97d
    MOV EDI,0x1bc9e08                   ; 0046e982
    MOV EBX,0x1bc9ec8                   ; 0046e987
    ADD ESI,0xc                         ; 0046e98c
    ADD EDI,0x18                        ; 0046e98f
    PUSH EDI                            ; 0046e992 | DAT_01bc9e20
        ;   Label: LAB_0046e992
    PUSH ESI                            ; 0046e993 | DAT_01bc9e14 | DAT_01bc9e20
    PUSH 0x1bc9e08                      ; 0046e994 | DAT_01bc9e08
    PUSH EBX                            ; 0046e999
    INC EBP                             ; 0046e99a
    ADD EDI,0xc                         ; 0046e99b
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0 ; 0046e99e
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0046e9a3
    ADD ESI,0xc                         ; 0046e9a6
    MOV ECX,dword ptr [ESP + 0xc]       ; 0046e9a9
    ADD EBX,0x38                        ; 0046e9ad
    CMP EBP,ECX                         ; 0046e9b0
    JL 0x0046e992                       ; 0046e9b2
        ;   XREF to: 0046e992 (CONDITIONAL_JUMP)  ; LAB_0046e992
    POP EBX                             ; 0046e9b4
    POP ESI                             ; 0046e9b5
    POP EDI                             ; 0046e9b6
    MOV EAX,0x1bc9ec8                   ; 0046e9b7
        ;   Label: LAB_0046e9b7
    ADD ESP,0x4                         ; 0046e9bc
    POP EBP                             ; 0046e9bf
    RET                                 ; 0046e9c0

