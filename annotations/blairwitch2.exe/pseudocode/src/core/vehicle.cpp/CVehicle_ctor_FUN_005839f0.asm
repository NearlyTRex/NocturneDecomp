; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVehicle * __cdecl core_vehicle_cpp_CVehicle_ctor_FUN_005839f0(CVehicle *this_ptr)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vehicle.cpp_factoryFuncVehicle_FUN_005839c0 at 005839d3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_course.cpp_CCourse_ctor_FUN_00438a50
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005839f0
        ;   Label: core_vehicle.cpp_CVehicle_ctor_FUN_005839f0
    PUSH ESI                            ; 005839f1
    PUSH EDI                            ; 005839f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005839f3
    PUSH EBX                            ; 005839f7
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 005839f8
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005839fd
    ADD EAX,0x2b4                       ; 00583a00
    PUSH EAX                            ; 00583a05
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 00583a06
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00583a0b
    PUSH 0x5f3fc0                       ; 00583a0e
    PUSH 0x4                            ; 00583a13
    ADD EAX,0x17c                       ; 00583a15
    PUSH EAX                            ; 00583a1a
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00583a1b
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 00583a20
    PUSH 0x5fdae0                       ; 00583a23
    PUSH 0x4                            ; 00583a28
    ADD EAX,0x668                       ; 00583a2a
    PUSH EAX                            ; 00583a2f
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00583a30
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 00583a35
    ADD EAX,0x6e4                       ; 00583a38
    PUSH EAX                            ; 00583a3d
    CALL core_course.cpp_CCourse_ctor_FUN_00438a50 ; 00583a3e
        ;   XREF to: 00438a50 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_ctor_FUN_00438a50(CCourse * this_ptr)
    ADD ESP,0x4                         ; 00583a43
    LEA EBX,[EAX + 0xffffee84]          ; 00583a46
    PUSH 0x5edc28                       ; 00583a4c
    LEA EAX,[EBX + 0x2b4]               ; 00583a51
    PUSH EAX                            ; 00583a57
    MOV dword ptr [EBX + 0x2b0],0x5fd9f4 ; 00583a58
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 00583a62
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00583a67
    PUSH 0x5edc33                       ; 00583a6a
    LEA EAX,[EBX + 0xaac]               ; 00583a6f
    PUSH EAX                            ; 00583a75
    MOV dword ptr [EBX + 0xa94],0x4     ; 00583a76
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 00583a80
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00583a85
    PUSH 0x5edc3f                       ; 00583a88
    LEA EAX,[EBX + 0xe14]               ; 00583a8d
    PUSH EAX                            ; 00583a93
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 00583a94
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00583a99
    PUSH 0x5edc4b                       ; 00583a9c
    LEA EAX,[EBX + 0xc60]               ; 00583aa1
    PUSH EAX                            ; 00583aa7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 00583aa8
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00583aad
    PUSH 0x5edc57                       ; 00583ab0
    LEA EAX,[EBX + 0xfc8]               ; 00583ab5
    PUSH EAX                            ; 00583abb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 00583abc
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0xa98],0xc0200000 ; 00583ac1
    MOV dword ptr [EBX + 0xa9c],0xc0200000 ; 00583acb
    MOV dword ptr [EBX + 0xaa0],0x40a00000 ; 00583ad5
    ADD ESP,0x8                         ; 00583adf
    MOV dword ptr [EBX + 0xaa4],0x3fa00000 ; 00583ae2
    MOV dword ptr [EBX + 0xaa8],0x3e800000 ; 00583aec
    MOV dword ptr [EBX + 0xc4c],0x40200000 ; 00583af6
    MOV dword ptr [EBX + 0xc50],0xc0200000 ; 00583b00
    MOV dword ptr [EBX + 0xc54],0x40a00000 ; 00583b0a
    MOV dword ptr [EBX + 0xc58],0x3fa00000 ; 00583b14
    MOV dword ptr [EBX + 0xc5c],0x3e800000 ; 00583b1e
    MOV dword ptr [EBX + 0xe00],0xc0200000 ; 00583b28
    MOV dword ptr [EBX + 0xe04],0xc0200000 ; 00583b32
    MOV dword ptr [EBX + 0xe08],0xc0900000 ; 00583b3c
    MOV dword ptr [EBX + 0xe0c],0x3fa00000 ; 00583b46
    MOV dword ptr [EBX + 0xe10],0x3e800000 ; 00583b50
    MOV dword ptr [EBX + 0xfb4],0x40200000 ; 00583b5a
    MOV dword ptr [EBX + 0xfb8],0xc0200000 ; 00583b64
    MOV dword ptr [EBX + 0xfbc],0xc0900000 ; 00583b6e
    MOV dword ptr [EBX + 0xfc0],0x3fa00000 ; 00583b78
    MOV dword ptr [EBX + 0xfc4],0x3e800000 ; 00583b82
    LEA EAX,[EBX + 0xa2c]               ; 00583b8c
    MOV dword ptr [EBX + 0xa74],0x44fa0000 ; 00583b92
    MOV dword ptr [EAX + 0x8],0x0       ; 00583b9c
    MOV EDX,dword ptr [EAX + 0x8]       ; 00583ba3
    MOV dword ptr [EAX + 0x4],EDX       ; 00583ba6
    MOV EDX,dword ptr [EAX + 0x4]       ; 00583ba9
    MOV dword ptr [EAX],EDX             ; 00583bac
    LEA EAX,[EBX + 0xa20]               ; 00583bae
    MOV dword ptr [EAX + 0x8],0x0       ; 00583bb4
    MOV EDX,dword ptr [EAX + 0x8]       ; 00583bbb
    MOV dword ptr [EAX + 0x4],EDX       ; 00583bbe
    MOV EDX,dword ptr [EAX + 0x4]       ; 00583bc1
    MOV dword ptr [EAX],EDX             ; 00583bc4
    LEA EAX,[EBX + 0xa50]               ; 00583bc6
    MOV dword ptr [EAX + 0x8],0x0       ; 00583bcc
    MOV ESI,0x5edc63                    ; 00583bd3
    MOV EDX,dword ptr [EAX + 0x8]       ; 00583bd8
    MOV dword ptr [EAX + 0x4],EDX       ; 00583bdb
    MOV EDX,dword ptr [EAX + 0x4]       ; 00583bde
    MOV dword ptr [EAX],EDX             ; 00583be1
    MOV dword ptr [EBX + 0x1188],0x0    ; 00583be3
    LEA EDI,[EBX + 0x1190]              ; 00583bed
    MOV dword ptr [EBX + 0x118c],0x42c80000 ; 00583bf3
    PUSH EDI                            ; 00583bfd
    MOV AL,byte ptr [ESI]               ; 00583bfe
        ;   Label: LAB_00583bfe
    MOV byte ptr [EDI],AL               ; 00583c00
    CMP AL,0x0                          ; 00583c02
    JZ 0x00583c16                       ; 00583c04
        ;   XREF to: 00583c16 (CONDITIONAL_JUMP)  ; LAB_00583c16
    MOV AL,byte ptr [ESI + 0x1]         ; 00583c06
    ADD ESI,0x2                         ; 00583c09
    MOV byte ptr [EDI + 0x1],AL         ; 00583c0c
    ADD EDI,0x2                         ; 00583c0f
    CMP AL,0x0                          ; 00583c12
    JNZ 0x00583bfe                      ; 00583c14
        ;   XREF to: 00583bfe (CONDITIONAL_JUMP)  ; LAB_00583bfe
    POP EDI                             ; 00583c16
        ;   Label: LAB_00583c16
    MOV dword ptr [EBX + 0x11c8],0x0    ; 00583c17
    MOV dword ptr [EBX + 0x11cc],0x0    ; 00583c21
    MOV EAX,EBX                         ; 00583c2b
    MOV dword ptr [EBX + 0x11d0],0x0    ; 00583c2d
    POP EDI                             ; 00583c37
    POP ESI                             ; 00583c38
    POP EBX                             ; 00583c39
    RET                                 ; 00583c3a

