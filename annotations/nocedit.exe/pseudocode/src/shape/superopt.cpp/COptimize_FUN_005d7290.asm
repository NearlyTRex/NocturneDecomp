; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_COptimize_FUN_005d7290(COptimize * this_ptr)
;
; Parameters:
; COptimize *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_superopt.cpp_TriListSomething_FUN_005d77a0 at 005d7cdb
;
; Referenced Globals:
;   TerminatedCString s_Unable_to_optimize_verti_006545f4
;   TerminatedCString s_Unable_to_remove_invalid_00654638
;   TerminatedCString s_Unable_to_remove_T_Junti_00654665
;   TerminatedCString s_Unable_to_reduce_databas_0065468c
;   TerminatedCString s_Unable_to_reduce_databas_006546b5
;
; Called Functions:
;   shape_superopt.cpp_CObj_clearStateFlags_FUN_005d35e0
;   shape_superopt.cpp_CObj_removeInvalidPolygons_FUN_005d46f0
;   shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0
;   shape_superopt.cpp_CObj_weldVertices_FUN_005d4160
;   shape_superopt.cpp_logToFile_FUN_005c7910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d7290
        ;   Label: shape_superopt.cpp_COptimize_FUN_005d7290
    MOV EBX,dword ptr [ESP + 0x8]       ; 005d7291
    PUSH 0x1                            ; 005d7295
    MOV EDX,dword ptr [EBX + 0x20]      ; 005d7297
    PUSH EDX                            ; 005d729a
    MOV ECX,dword ptr [EBX + 0x1c]      ; 005d729b
    PUSH ECX                            ; 005d729e
    PUSH EBX                            ; 005d729f
    CALL shape_superopt.cpp_CObj_weldVertices_FUN_005d4160 ; 005d72a0
        ;   XREF to: 005d4160 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_CObj_weldVertices_FUN_005d4160(CObj * this_ptr, double weld_tolerance, int remove_degenerate)
    ADD ESP,0x10                        ; 005d72a5
    TEST EAX,EAX                        ; 005d72a8
    JZ 0x005d72f6                       ; 005d72aa
        ;   XREF to: 005d72f6 (CONDITIONAL_JUMP)  ; LAB_005d72f6
    PUSH EBX                            ; 005d72ac
    CALL shape_superopt.cpp_CObj_removeInvalidPolygons_FUN_005d46f0 ; 005d72ad
        ;   XREF to: 005d46f0 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_CObj_removeInvalidPolygons_FUN_005d46f0(CObj * this_ptr)
    ADD ESP,0x4                         ; 005d72b2
    TEST EAX,EAX                        ; 005d72b5
    JZ 0x005d7307                       ; 005d72b7
        ;   XREF to: 005d7307 (CONDITIONAL_JUMP)  ; LAB_005d7307
    PUSH 0x0                            ; 005d72b9
    PUSH EBX                            ; 005d72bb
    CALL shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0 ; 005d72bc
        ;   XREF to: 005d47b0 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0(CObj * this_ptr, int validate_first)
    ADD ESP,0x8                         ; 005d72c1
    TEST EAX,EAX                        ; 005d72c4
    JZ 0x005d7318                       ; 005d72c6
        ;   XREF to: 005d7318 (CONDITIONAL_JUMP)  ; LAB_005d7318
    PUSH -0x1                           ; 005d72c8
    PUSH EBX                            ; 005d72ca
    CALL shape_superopt.cpp_CObj_clearStateFlags_FUN_005d35e0 ; 005d72cb
        ;   XREF to: 005d35e0 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_CObj_clearStateFlags_FUN_005d35e0(CObj * this_ptr, uint mask)
    ADD ESP,0x8                         ; 005d72d0
    MOV EAX,dword ptr [EBX + 0x40]      ; 005d72d3
    PUSH EBX                            ; 005d72d6
    CALL dword ptr [EAX + 0x2c]         ; 005d72d7
    ADD ESP,0x4                         ; 005d72da
    TEST EAX,EAX                        ; 005d72dd
    JZ 0x005d7329                       ; 005d72df
        ;   XREF to: 005d7329 (CONDITIONAL_JUMP)  ; LAB_005d7329
    PUSH EBX                            ; 005d72e1
    MOV EAX,dword ptr [EBX + 0x40]      ; 005d72e2
    CALL dword ptr [EAX + 0x34]         ; 005d72e5
    ADD ESP,0x4                         ; 005d72e8
    TEST EAX,EAX                        ; 005d72eb
    JZ 0x005d733a                       ; 005d72ed
        ;   XREF to: 005d733a (CONDITIONAL_JUMP)  ; LAB_005d733a
    MOV EAX,0x1                         ; 005d72ef
    POP EBX                             ; 005d72f4
    RET                                 ; 005d72f5
    PUSH 0x6545f4                       ; 005d72f6 | = "Unable to optimize vertices with give..."
        ;   Label: LAB_005d72f6
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005d72fb
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
    ADD ESP,0x4                         ; 005d7300
    XOR EAX,EAX                         ; 005d7303
    POP EBX                             ; 005d7305
    RET                                 ; 005d7306
    PUSH 0x654638                       ; 005d7307 | = "Unable to remove invalid polygons fro..."
        ;   Label: LAB_005d7307
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005d730c
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
    ADD ESP,0x4                         ; 005d7311
    XOR EAX,EAX                         ; 005d7314
    POP EBX                             ; 005d7316
    RET                                 ; 005d7317
    PUSH 0x654665                       ; 005d7318 | = "Unable to remove T-Juntions from scene"
        ;   Label: LAB_005d7318
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005d731d
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
    ADD ESP,0x4                         ; 005d7322
    XOR EAX,EAX                         ; 005d7325
    POP EBX                             ; 005d7327
    RET                                 ; 005d7328
    PUSH 0x65468c                       ; 005d7329 | = "Unable to reduce database (complex step)"
        ;   Label: LAB_005d7329
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005d732e
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
    ADD ESP,0x4                         ; 005d7333
    XOR EAX,EAX                         ; 005d7336
    POP EBX                             ; 005d7338
    RET                                 ; 005d7339
    PUSH 0x6546b5                       ; 005d733a | = "Unable to reduce database (convex step)"
        ;   Label: LAB_005d733a
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005d733f
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
    ADD ESP,0x4                         ; 005d7344
    XOR EAX,EAX                         ; 005d7347
    POP EBX                             ; 005d7349
    RET                                 ; 005d734a

