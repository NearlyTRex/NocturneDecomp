; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_shadowsc_cpp_CShadowsc_getTargetPoints_FUN_00561460(CShadowsc *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CShadowsc *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Called Functions:
;   core_skeleton.cpp_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561460
        ;   Label: core_shadowsc.cpp_CShadowsc_getTargetPoints_FUN_00561460
    PUSH ESI                            ; 00561461
    PUSH EDI                            ; 00561462
    SUB ESP,0x18                        ; 00561463
    MOV EAX,dword ptr [ESP + 0x28]      ; 00561466
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0056146a
    MOV EDX,dword ptr [EAX + 0xc268]    ; 0056146e
    PUSH EDX                            ; 00561474
    ADD EAX,0x158                       ; 00561475
    PUSH EAX                            ; 0056147a
    LEA ESI,[ESP + 0x8]                 ; 0056147b
    LEA EDI,[ESP + 0x14]                ; 0056147f
    CALL core_skeleton.cpp_FUN_00569130 ; 00561483
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x8]                 ; 00561488
    ADD ESP,0x8                         ; 0056148c
    LEA EAX,[ESP + 0xc]                 ; 0056148f
    MOVSD ES:EDI,ESI                    ; 00561493
    MOVSD ES:EDI,ESI                    ; 00561494
    MOVSD ES:EDI,ESI                    ; 00561495
    CMP EBX,EAX                         ; 00561496
    JNZ 0x005614a6                      ; 00561498
        ;   XREF to: 005614a6 (CONDITIONAL_JUMP)  ; LAB_005614a6
    MOV EAX,0x1                         ; 0056149a
    ADD ESP,0x18                        ; 0056149f
    POP EDI                             ; 005614a2
    POP ESI                             ; 005614a3
    POP EBX                             ; 005614a4
    RET                                 ; 005614a5
    MOV EAX,dword ptr [ESP + 0xc]       ; 005614a6
        ;   Label: LAB_005614a6
    MOV dword ptr [EBX],EAX             ; 005614aa
    MOV EAX,dword ptr [ESP + 0x10]      ; 005614ac
    MOV dword ptr [EBX + 0x4],EAX       ; 005614b0
    MOV EAX,dword ptr [ESP + 0x14]      ; 005614b3
    MOV dword ptr [EBX + 0x8],EAX       ; 005614b7
    MOV EAX,0x1                         ; 005614ba
    ADD ESP,0x18                        ; 005614bf
    POP EDI                             ; 005614c2
    POP ESI                             ; 005614c3
    POP EBX                             ; 005614c4
    RET                                 ; 005614c5

