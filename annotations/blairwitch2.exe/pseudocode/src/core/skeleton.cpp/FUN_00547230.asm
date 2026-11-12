; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_00547230(CDeformableModelInstance *param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_FUN_00541820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547230
        ;   Label: core_skeleton.cpp_FUN_00547230
    PUSH EDI                            ; 00547231
    SUB ESP,0xc                         ; 00547232
    MOV EBX,ESI                         ; 00547235
    MOV ESI,dword ptr [ESP + 0x18]      ; 00547237
    LEA EAX,[ESI + 0xe80]               ; 0054723b
    PUSH EAX                            ; 00547241
    MOV EDX,dword ptr [ESP + 0x24]      ; 00547242
    PUSH EDX                            ; 00547246
    MOV ECX,dword ptr [ESP + 0x24]      ; 00547247
    PUSH ECX                            ; 0054724b
    PUSH ESI                            ; 0054724c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 0054724d
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00547252
    PUSH EAX                            ; 00547255
    LEA ESI,[ESP + 0x10]                ; 00547256
    MOV EDI,EBX                         ; 0054725a
    CALL core_skeleton.cpp_FUN_00541820 ; 0054725c
        ;   XREF to: 00541820 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00541820()
    LEA ESI,[ESP + 0x10]                ; 00547261
    ADD ESP,0x10                        ; 00547265
    MOVSD ES:EDI,ESI                    ; 00547268
    MOVSD ES:EDI,ESI                    ; 00547269
    MOVSD ES:EDI,ESI                    ; 0054726a
    MOV EAX,EBX                         ; 0054726b
    ADD ESP,0xc                         ; 0054726d
    POP EDI                             ; 00547270
    POP EBX                             ; 00547271
    RET                                 ; 00547272

