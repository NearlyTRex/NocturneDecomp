; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_bodypart_cpp_CBodyPart_FUN_00419e10(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined1       Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_process_FUN_00419be0 at 00419cd5
;
; Referenced Globals:
;   double DOUBLE_00615e14 = 1.5
;   double DOUBLE_00615e1c = 3
;   double DOUBLE_00615e24 = 0.200000000000000
;   double DOUBLE_00615e2c = 5
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_flame.cpp_CFlame_process_FUN_004c9c00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419e10
        ;   Label: core_bodypart.cpp_CBodyPart_FUN_00419e10
    PUSH ESI                            ; 00419e11
    PUSH EDI                            ; 00419e12
    PUSH EBP                            ; 00419e13
    MOV EBP,ESP                         ; 00419e14
    SUB ESP,0x28                        ; 00419e16
    AND ESP,0xfffffff8                  ; 00419e19
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419e1c
    CMP dword ptr [EAX + 0x74c],0x0     ; 00419e1f
    JZ 0x00419f1d                       ; 00419e26
        ;   XREF to: 00419f1d (CONDITIONAL_JUMP)  ; LAB_00419f1d
    FLD float ptr [EAX + 0xcc8]         ; 00419e2c
    FSUB float ptr [EBP + 0x18]         ; 00419e32
    FST float ptr [EAX + 0xcc8]         ; 00419e35
    FLDZ                                ; 00419e3b
    FCOMPP                              ; 00419e3d
    FNSTSW AX                           ; 00419e3f
    SAHF                                ; 00419e41
    JA 0x00419f24                       ; 00419e42
        ;   XREF to: 00419f24 (CONDITIONAL_JUMP)  ; LAB_00419f24
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419e48
    MOV ECX,dword ptr [EAX + 0x74c]     ; 00419e4b
    XOR EDI,EDI                         ; 00419e51
    TEST ECX,ECX                        ; 00419e53
    JLE 0x00419f1d                      ; 00419e55
        ;   XREF to: 00419f1d (CONDITIONAL_JUMP)  ; LAB_00419f1d
    ADD EAX,0x750                       ; 00419e5b
    MOV ESI,dword ptr [EBP + 0x14]      ; 00419e60
    MOV dword ptr [ESP + 0x24],EAX      ; 00419e63
    ADD ESI,0x77c                       ; 00419e67
    IMUL EBX,EDI,0x2b0                  ; 00419e6d
        ;   Label: LAB_00419e6d
    ADD EBX,dword ptr [ESP + 0x24]      ; 00419e73
    PUSH EBX                            ; 00419e77
    LEA EAX,[ESP + 0x10]                ; 00419e78
    PUSH EAX                            ; 00419e7c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00419e7d
    PUSH EDX                            ; 00419e80
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00419e81
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    FLD float ptr [EAX]                 ; 00419e86
    MOV ECX,0x3f800000                  ; 00419e88
    ADD ESP,0xc                         ; 00419e8d
    FSTP float ptr [ESI]                ; 00419e90
    FLD float ptr [EAX + 0x4]           ; 00419e92
    MOV dword ptr [ESP + 0x8],ECX       ; 00419e95
    FSTP float ptr [ESI + 0x4]          ; 00419e99
    FLD float ptr [EAX + 0x8]           ; 00419e9c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419e9f
    FSTP float ptr [ESI + 0x8]          ; 00419ea2
    FLD float ptr [EAX + 0xcc8]         ; 00419ea5
    FST double ptr [ESP]                ; 00419eab
    FCOMP double ptr [0x00615e2c]       ; 00419eae | DOUBLE_00615e2c
    FNSTSW AX                           ; 00419eb4
    SAHF                                ; 00419eb6
    JNC 0x00419ec6                      ; 00419eb7
        ;   XREF to: 00419ec6 (CONDITIONAL_JUMP)  ; LAB_00419ec6
    FLD double ptr [ESP]                ; 00419eb9
    FMUL double ptr [0x00615e24]        ; 00419ebc | DOUBLE_00615e24
    FSTP float ptr [ESP + 0x8]          ; 00419ec2
    FLD float ptr [ESP + 0x8]           ; 00419ec6
        ;   Label: LAB_00419ec6
    FLD ST0                             ; 00419eca
    FMUL double ptr [0x00615e14]        ; 00419ecc | DOUBLE_00615e14
    FXCH                                ; 00419ed2
    FMUL double ptr [0x00615e1c]        ; 00419ed4 | DOUBLE_00615e1c
    ADD EBX,0xc                         ; 00419eda
    FXCH                                ; 00419edd
    FSTP float ptr [ESP + 0x20]         ; 00419edf
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419ee3
    PUSH dword ptr [EBP + 0x18]         ; 00419ee7
    MOV dword ptr [EBX + 0x158],EAX     ; 00419eea
    PUSH EBX                            ; 00419ef0
    FSTP float ptr [EBX + 0x15c]        ; 00419ef1
    MOV dword ptr [EBX + 0x160],EAX     ; 00419ef7
    CALL core_flame.cpp_CFlame_process_FUN_004c9c00 ; 00419efd
        ;   XREF to: 004c9c00 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_CFlame_process_FUN_004c9c00(CFlame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00419f02
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419f05
    INC EDI                             ; 00419f08
    MOV EBX,dword ptr [EAX + 0x74c]     ; 00419f09
    ADD ESI,0x2b0                       ; 00419f0f
    CMP EDI,EBX                         ; 00419f15
    JL 0x00419e6d                       ; 00419f17
        ;   XREF to: 00419e6d (CONDITIONAL_JUMP)  ; LAB_00419e6d
    MOV ESP,EBP                         ; 00419f1d
        ;   Label: LAB_00419f1d
    POP EBP                             ; 00419f1f
    POP EDI                             ; 00419f20
    POP ESI                             ; 00419f21
    POP EBX                             ; 00419f22
    RET                                 ; 00419f23
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419f24
        ;   Label: LAB_00419f24
    MOV dword ptr [EAX + 0x74c],0x0     ; 00419f27
    MOV dword ptr [EAX + 0xcc8],0x0     ; 00419f31
    MOV ESP,EBP                         ; 00419f3b
    POP EBP                             ; 00419f3d
    POP EDI                             ; 00419f3e
    POP ESI                             ; 00419f3f
    POP EBX                             ; 00419f40
    RET                                 ; 00419f41

