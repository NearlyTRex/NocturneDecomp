; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_stairs_cpp_CStairs_customRayIntersect_FUN_005ba590(CStairs *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
; CVector3f *      Stack[0x10]:4   out_normal
; Local Variables:
; CVector3f        Stack[-0x24]:12  local_24
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba590
        ;   Label: core_stairs.cpp_CStairs_customRayIntersect_FUN_005ba590
    PUSH ESI                            ; 005ba591
    PUSH EDI                            ; 005ba592
    PUSH EBP                            ; 005ba593
    MOV EBP,ESP                         ; 005ba594
    SUB ESP,0x20                        ; 005ba596
    AND ESP,0xfffffff8                  ; 005ba599
    MOV ESI,dword ptr [EBP + 0x20]      ; 005ba59c
    MOV EDX,0x3f8147ae                  ; 005ba59f
    MOV EBX,dword ptr [EBP + 0x14]      ; 005ba5a4
    XOR EDI,EDI                         ; 005ba5a7
    MOV dword ptr [ESP + 0x18],EDX      ; 005ba5a9
    ADD EBX,0x170                       ; 005ba5ad
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ba5b3
        ;   Label: LAB_005ba5b3
    MOV EAX,dword ptr [EAX + 0x16c]     ; 005ba5b6
    ADD EAX,EAX                         ; 005ba5bc
    CMP EDI,EAX                         ; 005ba5be
    JL 0x005ba5cd                       ; 005ba5c0
        ;   XREF to: 005ba5cd (CONDITIONAL_JUMP)  ; LAB_005ba5cd
    MOV EAX,dword ptr [ESP + 0x18]      ; 005ba5c2
    MOV ESP,EBP                         ; 005ba5c6
    POP EBP                             ; 005ba5c8
    POP EDI                             ; 005ba5c9
    POP ESI                             ; 005ba5ca
    POP EBX                             ; 005ba5cb
    RET                                 ; 005ba5cc
    MOV ECX,dword ptr [EBP + 0x1c]      ; 005ba5cd
        ;   Label: LAB_005ba5cd
    PUSH ECX                            ; 005ba5d0
    MOV EAX,dword ptr [EBP + 0x18]      ; 005ba5d1
    PUSH EAX                            ; 005ba5d4
    PUSH EBX                            ; 005ba5d5
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0049a800 ; 005ba5d6
        ;   XREF to: 0049a800 (UNCONDITIONAL_CALL)  ; float core_dtri.cpp_rayTriangleIntersection_FUN_0049a800(CDemonTriangle * triangle, CVector3f * rayOrigin, CVector3f * rayDirection)
    MOV dword ptr [ESP + 0x28],EAX      ; 005ba5db
    FLD float ptr [ESP + 0x28]          ; 005ba5df
    ADD ESP,0xc                         ; 005ba5e3
    FLDZ                                ; 005ba5e6
    FXCH                                ; 005ba5e8
    FST float ptr [ESP + 0x8]           ; 005ba5ea
    FSTP double ptr [ESP]               ; 005ba5ee
    FCOMP double ptr [ESP]              ; 005ba5f1
    FNSTSW AX                           ; 005ba5f4
    SAHF                                ; 005ba5f6
    JA 0x005ba651                       ; 005ba5f7
        ;   XREF to: 005ba651 (CONDITIONAL_JUMP)  ; LAB_005ba651
    FLD float ptr [ESP + 0x8]           ; 005ba5f9
    FCOMP float ptr [ESP + 0x18]        ; 005ba5fd
    FNSTSW AX                           ; 005ba601
    SAHF                                ; 005ba603
    JNC 0x005ba651                      ; 005ba604
        ;   XREF to: 005ba651 (CONDITIONAL_JUMP)  ; LAB_005ba651
    FLD1                                ; 005ba606
    FCOMP double ptr [ESP]              ; 005ba608
    FNSTSW AX                           ; 005ba60b
    SAHF                                ; 005ba60d
    JC 0x005ba651                       ; 005ba60e
        ;   XREF to: 005ba651 (CONDITIONAL_JUMP)  ; LAB_005ba651
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ba610
    MOV dword ptr [ESP + 0x18],EAX      ; 005ba614
    LEA EAX,[EBX + 0x24]                ; 005ba618
    FLD float ptr [EAX]                 ; 005ba61b
    FCHS                                ; 005ba61d
    FSTP float ptr [ESP + 0xc]          ; 005ba61f
    FLD float ptr [EAX + 0x4]           ; 005ba623
    FCHS                                ; 005ba626
    FSTP float ptr [ESP + 0x10]         ; 005ba628
    FLD float ptr [EAX + 0x8]           ; 005ba62c
    FCHS                                ; 005ba62f
    LEA EAX,[ESP + 0xc]                 ; 005ba631
    FSTP float ptr [ESP + 0x14]         ; 005ba635
    CMP ESI,EAX                         ; 005ba639
    JZ 0x005ba651                       ; 005ba63b
        ;   XREF to: 005ba651 (CONDITIONAL_JUMP)  ; LAB_005ba651
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ba63d
    MOV dword ptr [ESI],EAX             ; 005ba641
    MOV EAX,dword ptr [ESP + 0x10]      ; 005ba643
    MOV dword ptr [ESI + 0x4],EAX       ; 005ba647
    MOV EAX,dword ptr [ESP + 0x14]      ; 005ba64a
    MOV dword ptr [ESI + 0x8],EAX       ; 005ba64e
    INC EDI                             ; 005ba651
        ;   Label: LAB_005ba651
    ADD EBX,0x38                        ; 005ba652
    JMP 0x005ba5b3                      ; 005ba655
        ;   XREF to: 005ba5b3 (UNCONDITIONAL_JUMP)  ; LAB_005ba5b3

