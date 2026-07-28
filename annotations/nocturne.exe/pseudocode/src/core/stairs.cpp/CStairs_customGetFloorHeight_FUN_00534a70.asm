; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_stairs_cpp_CStairs_customGetFloorHeight_FUN_00534a70(int param_1,CVector3f *param_2,float param_3,float *param_4)
;
;
; Called Functions:
;   core_dtri.cpp_rayTriangleFloorTest_FUN_0046d110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534a70
        ;   Label: core_stairs.cpp_CStairs_customGetFloorHeight_FUN_00534a70
    PUSH ESI                            ; 00534a71
    PUSH EDI                            ; 00534a72
    PUSH EBP                            ; 00534a73
    MOV EBP,dword ptr [ESP + 0x14]      ; 00534a74
    LEA ESI,[EBP + 0x168]               ; 00534a78
    XOR EBX,EBX                         ; 00534a7e
    XOR EDI,EDI                         ; 00534a80
    MOV EAX,dword ptr [EBP + 0x164]     ; 00534a82
        ;   Label: LAB_00534a82
    ADD EAX,EAX                         ; 00534a88
    CMP EBX,EAX                         ; 00534a8a
    JL 0x00534a95                       ; 00534a8c
        ;   XREF to: 00534a95 (CONDITIONAL_JUMP)  ; LAB_00534a95
    MOV EAX,EDI                         ; 00534a8e
    POP EBP                             ; 00534a90
    POP EDI                             ; 00534a91
    POP ESI                             ; 00534a92
    POP EBX                             ; 00534a93
    RET                                 ; 00534a94
    MOV EDX,dword ptr [ESP + 0x20]      ; 00534a95
        ;   Label: LAB_00534a95
    PUSH EDX                            ; 00534a99
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00534a9a
    PUSH dword ptr [ESP + 0x20]         ; 00534a9e
    PUSH ECX                            ; 00534aa2
    PUSH ESI                            ; 00534aa3
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0046d110 ; 00534aa4
        ;   XREF to: 0046d110 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayTriangleFloorTest_FUN_0046d110(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 00534aa9
    TEST EAX,EAX                        ; 00534aac
    JZ 0x00534ab5                       ; 00534aae
        ;   XREF to: 00534ab5 (CONDITIONAL_JUMP)  ; LAB_00534ab5
    MOV EDI,0x1                         ; 00534ab0
    INC EBX                             ; 00534ab5
        ;   Label: LAB_00534ab5
    ADD ESI,0x38                        ; 00534ab6
    JMP 0x00534a82                      ; 00534ab9
        ;   XREF to: 00534a82 (UNCONDITIONAL_JUMP)  ; LAB_00534a82

