; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00481e20(int param_1)
;
;
; Referenced Globals:
;   string s_modelName_00580fb1
;   string s_movieName_00580fbb
;   undefined4 DAT_005b8018
;
; Called Functions:
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481e20
        ;   Label: FUN_00481e20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00481e21
    PUSH EBX                            ; 00481e25
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 00481e26
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 00481e2b
    PUSH 0x580fb1                       ; 00481e2e | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 00481e33
    PUSH EAX                            ; 00481e39
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 00481e3a
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00()
    MOV EDX,dword ptr [0x005b8018]      ; 00481e3f | DAT_005b8018
    ADD ESP,0x8                         ; 00481e45
    CMP EDX,0x2                         ; 00481e48
    JGE 0x00481e4f                      ; 00481e4b
        ;   XREF to: 00481e4f (CONDITIONAL_JUMP)  ; LAB_00481e4f
    POP EBX                             ; 00481e4d
    RET                                 ; 00481e4e
    PUSH 0x580fbb                       ; 00481e4f | = "movieName"
        ;   Label: LAB_00481e4f
    LEA EAX,[EBX + 0x2d0]               ; 00481e54
    PUSH EAX                            ; 00481e5a
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00481e5b
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 00481e60
    POP EBX                             ; 00481e63
    RET                                 ; 00481e64

