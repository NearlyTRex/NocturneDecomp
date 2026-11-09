; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMarquee * __cdecl core_marquee_cpp_CMarquee_ctor_FUN_004e7c80(CMarquee *this_ptr)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_marquee.cpp_factoryFuncMarquee_FUN_004e7c50 at 004e7c63
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_course.cpp_CCourse_ctor_FUN_00438a50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e7c80
        ;   Label: core_marquee.cpp_CMarquee_ctor_FUN_004e7c80
    PUSH EDI                            ; 004e7c81
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e7c82
    PUSH EDX                            ; 004e7c86
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 004e7c87
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e7c8c
    ADD EAX,0x300                       ; 004e7c8f
    PUSH EAX                            ; 004e7c94
    CALL core_course.cpp_CCourse_ctor_FUN_00438a50 ; 004e7c95
        ;   XREF to: 00438a50 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_ctor_FUN_00438a50(CCourse * this_ptr)
    LEA EDX,[EAX + 0xfffffd00]          ; 004e7c9a
    MOV ESI,0x5dc74e                    ; 004e7ca0
    ADD ESP,0x4                         ; 004e7ca5
    MOV dword ptr [EDX + 0x2b0],0x5f9b74 ; 004e7ca8
    LEA EDI,[EDX + 0x2b4]               ; 004e7cb2
    MOV dword ptr [EDX + 0x2d4],0x41200000 ; 004e7cb8
    PUSH EDI                            ; 004e7cc2
    MOV AL,byte ptr [ESI]               ; 004e7cc3
        ;   Label: LAB_004e7cc3
    MOV byte ptr [EDI],AL               ; 004e7cc5
    CMP AL,0x0                          ; 004e7cc7
    JZ 0x004e7cdb                       ; 004e7cc9
        ;   XREF to: 004e7cdb (CONDITIONAL_JUMP)  ; LAB_004e7cdb
    MOV AL,byte ptr [ESI + 0x1]         ; 004e7ccb
    ADD ESI,0x2                         ; 004e7cce
    MOV byte ptr [EDI + 0x1],AL         ; 004e7cd1
    ADD EDI,0x2                         ; 004e7cd4
    CMP AL,0x0                          ; 004e7cd7
    JNZ 0x004e7cc3                      ; 004e7cd9
        ;   XREF to: 004e7cc3 (CONDITIONAL_JUMP)  ; LAB_004e7cc3
    POP EDI                             ; 004e7cdb
        ;   Label: LAB_004e7cdb
    MOV dword ptr [EDX + 0x2d8],0x0     ; 004e7cdc
    MOV dword ptr [EDX + 0x2dc],0x3     ; 004e7ce6
    MOV dword ptr [EDX + 0x2e0],0x0     ; 004e7cf0
    MOV dword ptr [EDX + 0x2e4],0x0     ; 004e7cfa
    MOV dword ptr [EDX + 0x2e8],0x0     ; 004e7d04
    MOV dword ptr [EDX + 0x2ec],0x0     ; 004e7d0e
    MOV dword ptr [EDX + 0x2f0],0x0     ; 004e7d18
    MOV dword ptr [EDX + 0x2f4],0x0     ; 004e7d22
    MOV dword ptr [EDX + 0xfc],0x1      ; 004e7d2c
    MOV EAX,EDX                         ; 004e7d36
    MOV dword ptr [EDX + 0x2fc],0x1     ; 004e7d38
    POP EDI                             ; 004e7d42
    POP ESI                             ; 004e7d43
    RET                                 ; 004e7d44

