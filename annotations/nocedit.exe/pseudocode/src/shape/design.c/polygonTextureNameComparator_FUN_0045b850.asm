; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_design_c_polygonTextureNameComparator_FUN_0045b850(SShapeEditorPolygon *polygon1,SShapeEditorPolygon *polygon2)
;
; Parameters:
; SShapeEditorPolygon * Stack[0x4]:4   polygon1
; SShapeEditorPolygon * Stack[0x8]:4   polygon2
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_sortPolygonsByTexture_FUN_0045b8b0 at 0045b90e
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b850
        ;   Label: shape_design.c_polygonTextureNameComparator_FUN_0045b850
    PUSH ESI                            ; 0045b851
    PUSH EDI                            ; 0045b852
    PUSH EBP                            ; 0045b853
    MOV EBP,ESP                         ; 0045b854
    SUB ESP,0x4                         ; 0045b856
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b85c
    CMP byte ptr [EAX + 0x4],0x0        ; 0045b85f
    JNZ 0x0045b86e                      ; 0045b863
        ;   XREF to: 0045b86e (CONDITIONAL_JUMP)  ; LAB_0045b86e
    MOV dword ptr [EBP + -0x4],0x1      ; 0045b865
    JMP 0x0045b899                      ; 0045b86c
        ;   XREF to: 0045b899 (UNCONDITIONAL_JUMP)  ; LAB_0045b899
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045b86e
        ;   Label: LAB_0045b86e
    CMP byte ptr [EAX + 0x4],0x0        ; 0045b871
    JNZ 0x0045b880                      ; 0045b875
        ;   XREF to: 0045b880 (CONDITIONAL_JUMP)  ; LAB_0045b880
    MOV dword ptr [EBP + -0x4],0xffffffff ; 0045b877
    JMP 0x0045b899                      ; 0045b87e
        ;   XREF to: 0045b899 (UNCONDITIONAL_JUMP)  ; LAB_0045b899
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045b880
        ;   Label: LAB_0045b880
    ADD EAX,0x4                         ; 0045b883
    PUSH EAX                            ; 0045b886
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b887
    ADD EAX,0x4                         ; 0045b88a
    PUSH EAX                            ; 0045b88d
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0045b88e
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0045b893
    MOV dword ptr [EBP + -0x4],EAX      ; 0045b896
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045b899
        ;   Label: LAB_0045b899
    MOV ESP,EBP                         ; 0045b89c
    POP EBP                             ; 0045b89e
    POP EDI                             ; 0045b89f
    POP ESI                             ; 0045b8a0
    POP EBX                             ; 0045b8a1
    RET                                 ; 0045b8a2

