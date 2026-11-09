; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stairs_cpp_CStairs_customGetFloorHeight_FUN_005686d0(CStairs *this_ptr,CVector3f *position,float search_radius,float *out_floor_height)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   search_radius
; float *          Stack[0x10]:4   out_floor_height
;
; Called Functions:
;   core_dtri.cpp_FUN_004795c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005686d0
        ;   Label: core_stairs.cpp_CStairs_customGetFloorHeight_FUN_005686d0
    PUSH ESI                            ; 005686d1
    PUSH EDI                            ; 005686d2
    PUSH EBP                            ; 005686d3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005686d4
    LEA ESI,[EBP + 0x170]               ; 005686d8
    XOR EBX,EBX                         ; 005686de
    XOR EDI,EDI                         ; 005686e0
    MOV EAX,dword ptr [EBP + 0x16c]     ; 005686e2
        ;   Label: LAB_005686e2
    ADD EAX,EAX                         ; 005686e8
    CMP EBX,EAX                         ; 005686ea
    JL 0x005686f5                       ; 005686ec
        ;   XREF to: 005686f5 (CONDITIONAL_JUMP)  ; LAB_005686f5
    MOV EAX,EDI                         ; 005686ee
    POP EBP                             ; 005686f0
    POP EDI                             ; 005686f1
    POP ESI                             ; 005686f2
    POP EBX                             ; 005686f3
    RET                                 ; 005686f4
    MOV EDX,dword ptr [ESP + 0x20]      ; 005686f5
        ;   Label: LAB_005686f5
    PUSH EDX                            ; 005686f9
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005686fa
    PUSH dword ptr [ESP + 0x20]         ; 005686fe
    PUSH ECX                            ; 00568702
    PUSH ESI                            ; 00568703
    CALL core_dtri.cpp_FUN_004795c0     ; 00568704
        ;   XREF to: 004795c0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_004795c0(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 00568709
    TEST EAX,EAX                        ; 0056870c
    JZ 0x00568715                       ; 0056870e
        ;   XREF to: 00568715 (CONDITIONAL_JUMP)  ; LAB_00568715
    MOV EDI,0x1                         ; 00568710
    INC EBX                             ; 00568715
        ;   Label: LAB_00568715
    ADD ESI,0x38                        ; 00568716
    JMP 0x005686e2                      ; 00568719
        ;   XREF to: 005686e2 (UNCONDITIONAL_JUMP)  ; LAB_005686e2

