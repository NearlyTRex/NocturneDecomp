; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CBloodParticle_onCollision_FUN_004ae900(CBloodParticle *this_ptr,CVector3f *collision_normal)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   collision_normal
;
; Referenced Globals:
;   double DOUBLE_005850a0 = 0.900000000000000
;   int INT_005b96c4 = 0x1c78c7c
;
; Called Functions:
;   core_gore.cpp_CGore_createGroundBloodSplat_FUN_004b0190
;   core_gore.cpp_CGore_createWallBloodSplat_FUN_004b01c0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004ae900
        ;   Label: core_gore.cpp_CBloodParticle_onCollision_FUN_004ae900
    PUSH EBP                            ; 004ae901
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ae902
    MOV ECX,dword ptr [ESP + 0x10]      ; 004ae906
    FLD float ptr [ECX + 0x4]           ; 004ae90a
    FCOMP double ptr [0x005850a0]       ; 004ae90d | DOUBLE_005850a0
    FNSTSW AX                           ; 004ae913
    SAHF                                ; 004ae915
    JBE 0x004ae934                      ; 004ae916
        ;   XREF to: 004ae934 (CONDITIONAL_JUMP)  ; LAB_004ae934
    MOV EDI,dword ptr [EDX + 0x38]      ; 004ae918
    PUSH EDI                            ; 004ae91b
    PUSH EDX                            ; 004ae91c
    MOV EBP,dword ptr [0x005b96c4]      ; 004ae91d | INT_005b96c4
    PUSH EBP                            ; 004ae923
    CALL core_gore.cpp_CGore_createGroundBloodSplat_FUN_004b0190 ; 004ae924
        ;   XREF to: 004b0190 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createGroundBloodSplat_FUN_004b0190(CGore * this_ptr, CVector3f * position, int blood_type)
    ADD ESP,0xc                         ; 004ae929
    MOV EAX,0x1                         ; 004ae92c
    POP EBP                             ; 004ae931
    POP EDI                             ; 004ae932
    RET                                 ; 004ae933
    PUSH ESI                            ; 004ae934
        ;   Label: LAB_004ae934
    PUSH EBX                            ; 004ae935
    MOV EBX,dword ptr [EDX + 0x38]      ; 004ae936
    PUSH EBX                            ; 004ae939
    PUSH ECX                            ; 004ae93a
    PUSH EDX                            ; 004ae93b
    MOV ESI,dword ptr [0x005b96c4]      ; 004ae93c | INT_005b96c4
    PUSH ESI                            ; 004ae942
    CALL core_gore.cpp_CGore_createWallBloodSplat_FUN_004b01c0 ; 004ae943
        ;   XREF to: 004b01c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createWallBloodSplat_FUN_004b01c0(CGore * this_ptr, CVector3f * position, CVector3f * normal, int blood_type)
    ADD ESP,0x10                        ; 004ae948
    POP EBX                             ; 004ae94b
    POP ESI                             ; 004ae94c
    MOV EAX,0x1                         ; 004ae94d
    POP EBP                             ; 004ae952
    POP EDI                             ; 004ae953
    RET                                 ; 004ae954

